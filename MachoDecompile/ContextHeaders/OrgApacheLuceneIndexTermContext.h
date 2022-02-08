// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXTERMCONTEXT_H
#define ORGAPACHELUCENEINDEXTERMCONTEXT_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexIndexReaderContext.h"
#import "IOSObjectArray.h"

@interface OrgApacheLuceneIndexTermContext : NSObject {
    OrgApacheLuceneIndexIndexReaderContext *topReaderContext_;
    IOSObjectArray *states_;
    int docFreq_;
    NSInteger totalTermFreq_;
}




-(id)initWithOrgApacheLuceneIndexIndexReaderContext:(id)arg0 ;
-(id)initWithOrgApacheLuceneIndexIndexReaderContext:(id)arg0 withOrgApacheLuceneIndexTermState:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withLong:(NSInteger)arg4 ;
-(void)clear;
-(void)register__WithOrgApacheLuceneIndexTermState:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withLong:(NSInteger)arg3 ;
-(void)register__WithOrgApacheLuceneIndexTermState:(id)arg0 withInt:(int)arg1 ;
-(void)accumulateStatisticsWithInt:(int)arg0 withLong:(NSInteger)arg1 ;
-(id)getWithInt:(int)arg0 ;
-(int)docFreq;
-(NSInteger)totalTermFreq;
-(BOOL)hasOnlyRealTerms;
-(id)description;
-(void)dealloc;
+(id)buildWithOrgApacheLuceneIndexIndexReaderContext:(id)arg0 withOrgApacheLuceneIndexTerm:(id)arg1 ;


@end


#endif