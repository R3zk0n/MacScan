// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGREFLECTMODIFIER_H
#define JAVALANGREFLECTMODIFIER_H


#import <Foundation/Foundation.h>


@interface JavaLangReflectModifier : NSObject



-(id)init;
+(int)classModifiers;
+(int)constructorModifiers;
+(int)fieldModifiers;
+(int)interfaceModifiers;
+(int)methodModifiers;
+(BOOL)isAbstractWithInt:(int)arg0 ;
+(BOOL)isFinalWithInt:(int)arg0 ;
+(BOOL)isInterfaceWithInt:(int)arg0 ;
+(BOOL)isNativeWithInt:(int)arg0 ;
+(BOOL)isPrivateWithInt:(int)arg0 ;
+(BOOL)isProtectedWithInt:(int)arg0 ;
+(BOOL)isPublicWithInt:(int)arg0 ;
+(BOOL)isStaticWithInt:(int)arg0 ;
+(BOOL)isStrictWithInt:(int)arg0 ;
+(BOOL)isSynchronizedWithInt:(int)arg0 ;
+(BOOL)isTransientWithInt:(int)arg0 ;
+(BOOL)isVolatileWithInt:(int)arg0 ;
+(id)toStringWithInt:(int)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif