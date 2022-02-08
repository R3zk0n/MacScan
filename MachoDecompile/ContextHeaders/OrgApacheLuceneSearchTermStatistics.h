// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHTERMSTATISTICS_H
#define ORGAPACHELUCENESEARCHTERMSTATISTICS_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilBytesRef.h"

@interface OrgApacheLuceneSearchTermStatistics : NSObject {
    OrgApacheLuceneUtilBytesRef *term_;
    NSInteger docFreq_;
    NSInteger totalTermFreq_;
}




-(id)initWithOrgApacheLuceneUtilBytesRef:(id)arg0 withLong:(NSInteger)arg1 withLong:(NSInteger)arg2 ;
-(id)term;
-(NSInteger)docFreq;
-(NSInteger)totalTermFreq;
-(void)dealloc;


@end


#endif