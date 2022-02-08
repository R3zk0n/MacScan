// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGCLASSLOADER_H
#define JAVALANGCLASSLOADER_H


#import <Foundation/Foundation.h>

#import "JavaLangClassLoader.h"
#import "JavaUtilMap-Protocol.h"

@interface JavaLangClassLoader : NSObject {
    JavaLangClassLoader *parent_;
    id<JavaUtilMap> *packages_;
}




-(id)init;
-(id)initWithJavaLangClassLoader:(id)arg0 ;
-(id)initWithJavaLangClassLoader:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)defineClassWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)defineClassWithNSString:(id)arg0 withByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(id)defineClassWithNSString:(id)arg0 withByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withJavaSecurityProtectionDomain:(id)arg4 ;
-(id)defineClassWithNSString:(id)arg0 withJavaNioByteBuffer:(id)arg1 withJavaSecurityProtectionDomain:(id)arg2 ;
-(id)findClassWithNSString:(id)arg0 ;
-(id)findLoadedClassWithNSString:(id)arg0 ;
-(id)findSystemClassWithNSString:(id)arg0 ;
-(id)getParent;
-(id)getResourceWithNSString:(id)arg0 ;
-(id)getResourcesWithNSString:(id)arg0 ;
-(id)getResourceAsStreamWithNSString:(id)arg0 ;
-(id)loadClassWithNSString:(id)arg0 ;
-(id)loadClassWithNSString:(id)arg0 withBoolean:(BOOL)arg1 ;
-(void)resolveClassWithIOSClass:(id)arg0 ;
-(id)findResourceWithNSString:(id)arg0 ;
-(id)findResourcesWithNSString:(id)arg0 ;
-(id)findLibraryWithNSString:(id)arg0 ;
-(id)getPackageWithNSString:(id)arg0 ;
-(id)getPackages;
-(id)definePackageWithNSString:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withNSString:(id)arg5 withNSString:(id)arg6 withJavaNetURL:(id)arg7 ;
-(void)setSignersWithIOSClass:(id)arg0 withNSObjectArray:(id)arg1 ;
-(void)setClassAssertionStatusWithNSString:(id)arg0 withBoolean:(BOOL)arg1 ;
-(void)setPackageAssertionStatusWithNSString:(id)arg0 withBoolean:(BOOL)arg1 ;
-(void)setDefaultAssertionStatusWithBoolean:(BOOL)arg0 ;
-(void)clearAssertionStatus;
-(void)dealloc;
+(id)getSystemClassLoader;
+(id)getSystemResourceWithNSString:(id)arg0 ;
+(id)getSystemResourcesWithNSString:(id)arg0 ;
+(id)getSystemResourceAsStreamWithNSString:(id)arg0 ;
+(id)__annotations_defineClassWithByteArray_withInt_withInt_;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif