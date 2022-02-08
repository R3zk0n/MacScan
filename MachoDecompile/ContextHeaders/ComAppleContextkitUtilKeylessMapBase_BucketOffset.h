// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLECONTEXTKITUTILKEYLESSMAPBASE_BUCKETOFFSET_H
#define COMAPPLECONTEXTKITUTILKEYLESSMAPBASE_BUCKETOFFSET_H


#import <Foundation/Foundation.h>

#import "JavaLangComparable-Protocol.h"

@interface ComAppleContextkitUtilKeylessMapBase_BucketOffset : NSObject <JavaLangComparable>

 {
    int start_;
    int end_;
    int valueGroup_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(int)compareToWithId:(id)arg0 ;


@end


#endif