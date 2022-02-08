// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHCONJUNCTIONDISI_H
#define ORGAPACHELUCENESEARCHCONJUNCTIONDISI_H



#import "OrgApacheLuceneSearchDocIdSetIterator.h"
#import "IOSObjectArray.h"

@interface OrgApacheLuceneSearchConjunctionDISI : OrgApacheLuceneSearchDocIdSetIterator {
    OrgApacheLuceneSearchDocIdSetIterator *lead_;
    IOSObjectArray *others_;
}




-(id)initWithJavaUtilList:(id)arg0 ;
-(BOOL)matches;
-(id)asTwoPhaseIterator;
-(int)doNextWithInt:(int)arg0 ;
-(int)advanceWithInt:(int)arg0 ;
-(int)docID;
-(int)nextDoc;
-(NSInteger)cost;
-(void)dealloc;
+(id)intersectWithJavaUtilList:(id)arg0 ;


@end


#endif