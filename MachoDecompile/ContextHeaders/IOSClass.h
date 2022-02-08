// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef IOSCLASS_H
#define IOSCLASS_H

@class Protocol;

#import <Foundation/Foundation.h>

#import "JavaLangReflectAnnotatedElement-Protocol.h"
#import "JavaLangReflectGenericDeclaration-Protocol.h"
#import "JavaIoSerializable-Protocol.h"
#import "JavaLangReflectType-Protocol.h"
#import "NSCopying-Protocol.h"

@interface IOSClass : NSObject <JavaLangReflectAnnotatedElement, JavaLangReflectGenericDeclaration, JavaIoSerializable, JavaLangReflectType, NSCopying>



@property (readonly) Class objcClass;
@property (readonly) Protocol *objcProtocol;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)newInstance;
-(id)getSuperclass;
-(id)getGenericSuperclass;
-(id)getDeclaringClass;
-(BOOL)isInstance:(id)arg0 ;
-(id)getName;
-(id)getSimpleName;
-(id)getCanonicalName;
-(id)objcName;
-(int)getModifiers;
-(void)collectMethods:(id)arg0 publicOnly:(BOOL)arg1 ;
-(id)getDeclaredMethods;
-(id)getDeclaredConstructors;
-(id)getMethods;
-(id)getConstructors;
-(id)getMethod:(id)arg0 parameterTypes:(id)arg1 ;
-(id)getDeclaredMethod:(id)arg0 parameterTypes:(id)arg1 ;
-(id)findMethodWithTranslatedName:(id)arg0 checkSupertypes:(BOOL)arg1 ;
-(id)findConstructorWithTranslatedName:(id)arg0 ;
-(id)getComponentType;
-(id)getConstructor:(id)arg0 ;
-(id)getDeclaredConstructor:(id)arg0 ;
-(BOOL)isAssignableFrom:(id)arg0 ;
-(id)asSubclass:(id)arg0 ;
-(id)binaryName;
-(id)cast:(id)arg0 ;
-(id)getEnclosingClass;
-(BOOL)isArray;
-(BOOL)isEnum;
-(BOOL)isInterface;
-(BOOL)isPrimitive;
-(BOOL)isAnnotation;
-(BOOL)isMemberClass;
-(BOOL)isLocalClass;
-(BOOL)isSynthetic;
-(id)getInterfacesInternal;
-(id)getInterfaces;
-(id)getGenericInterfaces;
-(id)getTypeParameters;
-(id)getAnnotationWithIOSClass:(id)arg0 ;
-(BOOL)isAnnotationPresentWithIOSClass:(id)arg0 ;
-(id)getAnnotations;
-(id)getDeclaredAnnotations;
-(id)getMetadata;
-(id)getPackage;
-(id)getClassLoader;
-(id)getDeclaredField:(id)arg0 ;
-(id)getField:(id)arg0 ;
-(id)getDeclaredFields;
-(id)getFields;
-(id)getEnclosingMethod;
-(id)getEnclosingConstructor;
-(id)getClasses;
-(id)getDeclaredClasses;
-(BOOL)isAnonymousClass;
-(BOOL)desiredAssertionStatus;
-(id)getEnumConstants;
-(Class)objcArrayClass;
-(NSUInteger)getSizeof;
-(id)getResource:(id)arg0 ;
-(id)getResourceAsStream:(id)arg0 ;
-(id)getProtectionDomain;
-(id)getSigners;
-(id)__boxValue:(*unk)arg0 ;
-(BOOL)__unboxValue:(id)arg0 toRawValue:(*unk)arg1 ;
-(void)__readRawValue:(*unk)arg0 fromAddress:(*void)arg1 ;
-(void)__writeRawValue:(*unk)arg0 toAddress:(*void)arg1 ;
-(BOOL)__convertRawValue:(*unk)arg0 toType:(*void)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getClass;
+(id)byteClass;
+(id)charClass;
+(id)doubleClass;
+(id)floatClass;
+(id)intClass;
+(id)longClass;
+(id)shortClass;
+(id)booleanClass;
+(id)voidClass;
+(id)classForIosName:(id)arg0 ;
+(id)primitiveClassForChar:(unsigned short)arg0 ;
+(id)forName:(id)arg0 ;
+(id)forName:(id)arg0 initialize:(BOOL)arg1 classLoader:(id)arg2 ;
+(void)initialize;
+(NSInteger)serialVersionUID;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif