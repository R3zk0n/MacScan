// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILRESOURCEBUNDLE_H
#define JAVAUTILRESOURCEBUNDLE_H


#import <Foundation/Foundation.h>

#import "JavaUtilResourceBundle.h"
#import "JavaUtilLocale.h"

@interface JavaUtilResourceBundle : NSObject {
    JavaUtilResourceBundle *parent_;
    JavaUtilLocale *locale_;
    NSInteger lastLoadTime_;
}




-(id)init;
-(id)getKeys;
-(id)getLocale;
-(id)getObjectWithNSString:(id)arg0 ;
-(id)getStringWithNSString:(id)arg0 ;
-(id)getStringArrayWithNSString:(id)arg0 ;
-(id)handleGetObjectWithNSString:(id)arg0 ;
-(void)setParentWithJavaUtilResourceBundle:(id)arg0 ;
-(void)setLocaleWithJavaUtilLocale:(id)arg0 ;
-(BOOL)containsKeyWithNSString:(id)arg0 ;
-(id)keySet;
-(id)handleKeySet;
-(void)dealloc;
+(id)getBundleWithNSString:(id)arg0 ;
+(id)getBundleWithNSString:(id)arg0 withJavaUtilLocale:(id)arg1 ;
+(id)getBundleWithNSString:(id)arg0 withJavaUtilLocale:(id)arg1 withJavaLangClassLoader:(id)arg2 ;
+(id)missingResourceExceptionWithNSString:(id)arg0 withNSString:(id)arg1 ;
+(id)getBundleWithNSString:(id)arg0 withJavaUtilResourceBundle_Control:(id)arg1 ;
+(id)getBundleWithNSString:(id)arg0 withJavaUtilLocale:(id)arg1 withJavaUtilResourceBundle_Control:(id)arg2 ;
+(id)getLoader;
+(id)getBundleWithNSString:(id)arg0 withJavaUtilLocale:(id)arg1 withJavaLangClassLoader:(id)arg2 withJavaUtilResourceBundle_Control:(id)arg3 ;
+(id)processGetBundleWithNSString:(id)arg0 withJavaUtilLocale:(id)arg1 withJavaLangClassLoader:(id)arg2 withJavaUtilResourceBundle_Control:(id)arg3 withBoolean:(BOOL)arg4 withJavaUtilResourceBundle:(id)arg5 ;
+(id)handleGetBundleWithBoolean:(BOOL)arg0 withNSString:(id)arg1 withJavaUtilLocale:(id)arg2 withJavaLangClassLoader:(id)arg3 ;
+(id)getLoaderCacheWithId:(id)arg0 ;
+(id)stripWithJavaUtilLocale:(id)arg0 ;
+(void)clearCache;
+(void)clearCacheWithJavaLangClassLoader:(id)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif