// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHSCORINGREWRITE_TERMFREQBOOSTBYTESTART_H
#define ORGAPACHELUCENESEARCHSCORINGREWRITE_TERMFREQBOOSTBYTESTART_H

@class DirectBytesStartArray;


#import "IOSFloatArray.h"
#import "IOSObjectArray.h"

@interface OrgApacheLuceneSearchScoringRewrite_TermFreqBoostByteStart : DirectBytesStartArray {
    IOSFloatArray *boost_;
    IOSObjectArray *termState_;
}




-(id)initWithInt:(int)arg0 ;
-(id)init__;
-(id)grow;
-(id)clear;
-(void)dealloc;


@end


#endif