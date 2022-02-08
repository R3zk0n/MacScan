// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef DALVIKSYSTEMCLOSEGUARD_H
#define DALVIKSYSTEMCLOSEGUARD_H


#import <Foundation/Foundation.h>

#import "JavaLangThrowable.h"

@interface DalvikSystemCloseGuard : NSObject {
    JavaLangThrowable *allocationSite_;
}




-(id)init;
-(void)openWithNSString:(id)arg0 ;
-(void)close;
-(void)warnIfOpen;
-(void)dealloc;
+(id)get;
+(void)setEnabledWithBoolean:(BOOL)arg0 ;
+(void)setReporterWithDalvikSystemCloseGuard_Reporter:(id)arg0 ;
+(id)getReporter;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif