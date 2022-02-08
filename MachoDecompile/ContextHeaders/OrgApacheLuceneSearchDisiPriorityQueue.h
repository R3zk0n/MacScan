// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHDISIPRIORITYQUEUE_H
#define ORGAPACHELUCENESEARCHDISIPRIORITYQUEUE_H


#import <Foundation/Foundation.h>

#import "JavaLangIterable-Protocol.h"

@interface OrgApacheLuceneSearchDisiPriorityQueue : NSObject <JavaLangIterable>

 {
    int size_;
    *id _heap;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)dealloc;
-(void)initHeapWithInt:(int)arg0 ;
-(id)getHeapWithInt:(int)arg0 ;
-(void)setHeapWithInt:(int)arg0 withOrgApacheLuceneSearchDisiWrapper:(id)arg1 ;
-(void)copyHeapWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)moveHeapWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)initWithInt:(int)arg0 ;
-(int)size;
-(id)top;
-(id)topList;
-(id)prependWithOrgApacheLuceneSearchDisiWrapper:(id)arg0 withOrgApacheLuceneSearchDisiWrapper:(id)arg1 ;
-(id)topListWithOrgApacheLuceneSearchDisiWrapper:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)addWithOrgApacheLuceneSearchDisiWrapper:(id)arg0 ;
-(id)pop;
-(id)updateTop;
-(id)updateTopWithOrgApacheLuceneSearchDisiWrapper:(id)arg0 ;
-(void)upHeapWithInt:(int)arg0 ;
-(void)downHeapWithInt:(int)arg0 ;
-(id)iterator;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(int)leftNodeWithInt:(int)arg0 ;
+(int)rightNodeWithInt:(int)arg0 ;
+(int)parentNodeWithInt:(int)arg0 ;


@end


#endif