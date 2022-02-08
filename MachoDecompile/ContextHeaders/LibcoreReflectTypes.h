// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREREFLECTTYPES_H
#define LIBCOREREFLECTTYPES_H


#import <Foundation/Foundation.h>


@interface LibcoreReflectTypes : NSObject



-(id)init;
+(id)getTypeArray:(id)arg0 clone:(BOOL)arg1 ;
+(id)getType:(id)arg0 ;
+(id)getSignature:(id)arg0 ;
+(id)toString:(id)arg0 ;
+(void)appendTypeName:(id)arg0 class:(id)arg1 ;
+(void)appendArrayGenericType:(id)arg0 types:(id)arg1 ;
+(void)appendGenericType:(id)arg0 type:(id)arg1 ;
+(void)initialize;
+(id)__annotations_getTypeArrayWithLibcoreReflectListOfTypes_withBoolean_;
+(id)__annotations_getTypeWithJavaLangReflectType_;
+(id)__annotations_getSignatureWithIOSClass_;
+(id)__annotations_toStringWithIOSClassArray_;
+(id)__annotations_appendTypeNameWithJavaLangStringBuilder_withIOSClass_;
+(id)__annotations_appendArrayGenericTypeWithJavaLangStringBuilder_withJavaLangReflectTypeArray_;
+(id)__annotations_appendGenericTypeWithJavaLangStringBuilder_withJavaLangReflectType_;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif