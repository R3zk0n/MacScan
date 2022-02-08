// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILRESOURCEBUNDLE_CONTROL_H
#define JAVAUTILRESOURCEBUNDLE_CONTROL_H


#import <Foundation/Foundation.h>

#import "JavaUtilList-Protocol.h"

@interface JavaUtilResourceBundle_Control : NSObject {
    id<JavaUtilList> *format_;
}




-(id)init;
-(id)getCandidateLocalesWithNSString:(id)arg0 withJavaUtilLocale:(id)arg1 ;
-(id)getFormatsWithNSString:(id)arg0 ;
-(id)getFallbackLocaleWithNSString:(id)arg0 withJavaUtilLocale:(id)arg1 ;
-(id)newBundleWithNSString:(id)arg0 withJavaUtilLocale:(id)arg1 withNSString:(id)arg2 withJavaLangClassLoader:(id)arg3 withBoolean:(BOOL)arg4 ;
-(NSInteger)getTimeToLiveWithNSString:(id)arg0 withJavaUtilLocale:(id)arg1 ;
-(BOOL)needsReloadWithNSString:(id)arg0 withJavaUtilLocale:(id)arg1 withNSString:(id)arg2 withJavaLangClassLoader:(id)arg3 withJavaUtilResourceBundle:(id)arg4 withLong:(NSInteger)arg5 ;
-(id)toBundleNameWithNSString:(id)arg0 withJavaUtilLocale:(id)arg1 ;
-(id)toResourceNameWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(void)dealloc;
+(id)getControlWithJavaUtilList:(id)arg0 ;
+(id)getNoFallbackControlWithJavaUtilList:(id)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif