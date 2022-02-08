// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGPACKAGE_H
#define JAVALANGPACKAGE_H


#import <Foundation/Foundation.h>

#import "JavaNetURL.h"
#import "JavaLangReflectAnnotatedElement-Protocol.h"

@interface JavaLangPackage : NSObject <JavaLangReflectAnnotatedElement>

 {
    NSString *name_;
    NSString *specTitle_;
    NSString *specVersion_;
    NSString *specVendor_;
    NSString *implTitle_;
    NSString *implVersion_;
    NSString *implVendor_;
    JavaNetURL *sealBase_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withNSString:(id)arg5 withNSString:(id)arg6 withJavaNetURL:(id)arg7 ;
-(id)getAnnotationWithIOSClass:(id)arg0 ;
-(id)getAnnotations;
-(id)getDeclaredAnnotations;
-(BOOL)isAnnotationPresentWithIOSClass:(id)arg0 ;
-(id)getImplementationTitle;
-(id)getImplementationVendor;
-(id)getImplementationVersion;
-(id)getName;
-(id)getSpecificationTitle;
-(id)getSpecificationVendor;
-(id)getSpecificationVersion;
-(BOOL)isCompatibleWithWithNSString:(id)arg0 ;
-(BOOL)isSealed;
-(BOOL)isSealedWithJavaNetURL:(id)arg0 ;
-(void)dealloc;
+(id)getPackageWithNSString:(id)arg0 ;
+(id)getPackages;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif