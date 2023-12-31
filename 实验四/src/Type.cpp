#include "Type.h"
#include <assert.h>
#include <iostream>
#include <sstream>

IntType TypeSystem::commonInt = IntType(4);
VoidType TypeSystem::commonVoid = VoidType();
IntType TypeSystem::commonConstInt = IntType(4, true);
ArrayType TypeSystem::commonArrayType = ArrayType(TypeSystem::intType, 10);
FunctionType TypeSystem::commonFuncType = FunctionType(TypeSystem::voidType, { TypeSystem::intType, TypeSystem::constIntType });


Type *TypeSystem::intType = &commonInt;
Type *TypeSystem::voidType = &commonVoid;
Type *TypeSystem::constIntType = &commonConstInt;
Type *TypeSystem::arrayType = &commonArrayType;
Type *TypeSystem::funcType = &commonFuncType;

std::string IntType::toStr()
{
    if (constant)
    {
        return "constant int";
    }
    else
    {
        return "int";
    }
}

std::string VoidType::toStr()
{
    return "void";
}

std::string ArrayType::toStr()
{
    std::vector<std::string> vec;
    Type *temp = this;
    while (temp && temp->isArray())
    {
        std::ostringstream buffer;
        if (temp == this && length == 0)
            buffer << '[' << ']';
        else
            buffer << '[' << ((ArrayType *)temp)->getLength() << ']';
        vec.push_back(buffer.str());
        temp = ((ArrayType *)temp)->getElementType();
        ;
    }
    assert(temp->isInt());
    std::ostringstream buffer;
    if (constant)
        buffer << "const ";
    buffer << "int";
    for (auto it = vec.begin(); it != vec.end(); it++)
        buffer << *it;
    return buffer.str();
}

std::string FunctionType::toStr()
{
    std::ostringstream buffer;
    buffer << returnType->toStr() << "(";
    for (auto it = paramsType.begin(); it != paramsType.end(); it++) {
        buffer << (*it)->toStr();
        if (it + 1 != paramsType.end())
            buffer << ", ";
    }
    buffer << ')';
    return buffer.str();
}

std::string StringType::toStr()
{
    std::ostringstream buffer;
    buffer << "const char[" << length << "]";
    return buffer.str();
}
