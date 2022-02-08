// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHINDEXSEARCHER_$3_H
#define ORGAPACHELUCENESEARCHINDEXSEARCHER_$3_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchScoreDoc.h"
#import "OrgApacheLuceneSearchCollectorManager-Protocol.h"

@interface OrgApacheLuceneSearchIndexSearcher_$3 : NSObject <OrgApacheLuceneSearchCollectorManager>

 {
    int val$cappedNumHits_;
    OrgApacheLuceneSearchScoreDoc *val$after_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)newCollector;
-(id)reduceWithJavaUtilCollection:(id)arg0 ;
-(id)initWithInt:(int)arg0 withOrgApacheLuceneSearchScoreDoc:(id)arg1 ;
-(void)dealloc;


@end


#endif