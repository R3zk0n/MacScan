// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREREFLECTGENERICSIGNATUREPARSER_H
#define LIBCOREREFLECTGENERICSIGNATUREPARSER_H


#import <Foundation/Foundation.h>

#import "LibcoreReflectListOfTypes.h"
#import "IOSObjectArray.h"
#import "JavaLangClassLoader.h"
#import "IOSCharArray.h"
#import "JavaLangReflectType-Protocol.h"
#import "JavaLangReflectType-Protocol.h"
#import "JavaLangReflectType-Protocol.h"
#import "JavaLangReflectGenericDeclaration-Protocol.h"

@interface LibcoreReflectGenericSignatureParser : NSObject {
    LibcoreReflectListOfTypes *exceptionTypes_;
    LibcoreReflectListOfTypes *parameterTypes_;
    IOSObjectArray *formalTypeParameters_;
    id<JavaLangReflectType> *returnType_;
    id<JavaLangReflectType> *fieldType_;
    LibcoreReflectListOfTypes *interfaceTypes_;
    id<JavaLangReflectType> *superclassType_;
    JavaLangClassLoader *loader_;
    id<JavaLangReflectGenericDeclaration> *genericDecl_;
    unsigned short symbol_;
    NSString *identifier_;
    IOSCharArray *buffer_;
    int pos_;
    BOOL eof_;
}




-(id)initWithJavaLangClassLoader:(id)arg0 ;
-(void)setInputWithJavaLangReflectGenericDeclaration:(id)arg0 withNSString:(id)arg1 ;
-(void)parseForClassWithJavaLangReflectGenericDeclaration:(id)arg0 withNSString:(id)arg1 ;
-(void)parseForMethodWithJavaLangReflectGenericDeclaration:(id)arg0 withNSString:(id)arg1 withIOSClassArray:(id)arg2 ;
-(void)parseForConstructorWithJavaLangReflectGenericDeclaration:(id)arg0 withNSString:(id)arg1 withIOSClassArray:(id)arg2 ;
-(void)parseForFieldWithJavaLangReflectGenericDeclaration:(id)arg0 withNSString:(id)arg1 ;
-(void)parseClassSignature;
-(void)parseOptFormalTypeParameters;
-(id)parseFormalTypeParameter;
-(id)parseFieldTypeSignature;
-(id)parseClassTypeSignature;
-(id)parseOptTypeArguments;
-(id)parseTypeArgument;
-(id)parseTypeVariableSignature;
-(id)parseTypeSignature;
-(void)parseMethodTypeSignatureWithIOSClassArray:(id)arg0 ;
-(id)parseReturnType;
-(void)scanSymbol;
-(void)expectWithChar:(unsigned short)arg0 ;
-(void)scanIdentifier;
-(void)dealloc;
+(BOOL)isStopSymbolWithChar:(unsigned short)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif