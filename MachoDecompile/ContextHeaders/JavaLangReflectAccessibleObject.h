// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGREFLECTACCESSIBLEOBJECT_H
#define JAVALANGREFLECTACCESSIBLEOBJECT_H


#import <Foundation/Foundation.h>

#import "JavaLangReflectAnnotatedElement-Protocol.h"

@interface JavaLangReflectAccessibleObject : NSObject <JavaLangReflectAnnotatedElement>

 {
    BOOL accessible_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(BOOL)isAccessible;
-(void)setAccessibleWithBoolean:(BOOL)arg0 ;
-(id)getAnnotationWithIOSClass:(id)arg0 ;
-(id)getDeclaredAnnotations;
-(id)getAnnotations;
-(BOOL)isAnnotationPresentWithIOSClass:(id)arg0 ;
-(id)getAnnotationsFromAccessor:(id)arg0 ;
-(id)toGenericString;
+(void)setAccessibleWithJavaLangReflectAccessibleObjectArray:(id)arg0 withBoolean:(BOOL)arg1 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif