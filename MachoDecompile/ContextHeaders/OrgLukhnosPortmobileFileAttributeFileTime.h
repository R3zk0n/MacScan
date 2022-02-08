// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGLUKHNOSPORTMOBILEFILEATTRIBUTEFILETIME_H
#define ORGLUKHNOSPORTMOBILEFILEATTRIBUTEFILETIME_H


#import <Foundation/Foundation.h>

#import "JavaLangComparable-Protocol.h"

@interface OrgLukhnosPortmobileFileAttributeFileTime : NSObject <JavaLangComparable>

 {
    NSInteger time_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithLong:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(int)compareToWithId:(id)arg0 ;
+(id)fromMillisWithLong:(NSInteger)arg0 ;


@end


#endif