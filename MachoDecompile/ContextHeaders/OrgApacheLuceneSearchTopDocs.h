// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHTOPDOCS_H
#define ORGAPACHELUCENESEARCHTOPDOCS_H


#import <Foundation/Foundation.h>

#import "IOSObjectArray.h"

@interface OrgApacheLuceneSearchTopDocs : NSObject {
    int totalHits_;
    IOSObjectArray *scoreDocs_;
    float maxScore_;
}




-(float)getMaxScore;
-(void)setMaxScoreWithFloat:(float)arg0 ;
-(id)initWithInt:(int)arg0 withOrgApacheLuceneSearchScoreDocArray:(id)arg1 ;
-(id)initWithInt:(int)arg0 withOrgApacheLuceneSearchScoreDocArray:(id)arg1 withFloat:(float)arg2 ;
-(void)dealloc;
+(id)mergeWithInt:(int)arg0 withOrgApacheLuceneSearchTopDocsArray:(id)arg1 ;
+(id)mergeWithInt:(int)arg0 withInt:(int)arg1 withOrgApacheLuceneSearchTopDocsArray:(id)arg2 ;
+(id)mergeWithOrgApacheLuceneSearchSort:(id)arg0 withInt:(int)arg1 withOrgApacheLuceneSearchTopFieldDocsArray:(id)arg2 ;
+(id)mergeWithOrgApacheLuceneSearchSort:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withOrgApacheLuceneSearchTopFieldDocsArray:(id)arg3 ;


@end


#endif