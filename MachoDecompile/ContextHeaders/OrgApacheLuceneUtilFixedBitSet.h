// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILFIXEDBITSET_H
#define ORGAPACHELUCENEUTILFIXEDBITSET_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilBitSet.h"
#import "IOSLongArray.h"
#import "OrgApacheLuceneUtilMutableBits-Protocol.h"
#import "OrgApacheLuceneUtilAccountable-Protocol.h"

@interface OrgApacheLuceneUtilFixedBitSet : OrgApacheLuceneUtilBitSet <OrgApacheLuceneUtilMutableBits, OrgApacheLuceneUtilAccountable>

 {
    IOSLongArray *bits_;
    int numBits_;
    int numWords_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithInt:(int)arg0 ;
-(id)initWithLongArray:(id)arg0 withInt:(int)arg1 ;
-(BOOL)verifyGhostBitsClear;
-(int)length;
-(NSInteger)ramBytesUsed;
-(id)getBits;
-(int)cardinality;
-(BOOL)getWithInt:(int)arg0 ;
-(void)setWithInt:(int)arg0 ;
-(BOOL)getAndSetWithInt:(int)arg0 ;
-(void)clearWithInt:(int)arg0 ;
-(BOOL)getAndClearWithInt:(int)arg0 ;
-(int)nextSetBitWithInt:(int)arg0 ;
-(int)prevSetBitWithInt:(int)arg0 ;
-(void)or__WithOrgApacheLuceneSearchDocIdSetIterator:(id)arg0 ;
-(void)or__WithOrgApacheLuceneUtilFixedBitSet:(id)arg0 ;
-(void)or__WithLongArray:(id)arg0 withInt:(int)arg1 ;
-(void)xor__WithOrgApacheLuceneUtilFixedBitSet:(id)arg0 ;
-(void)xor__WithOrgApacheLuceneSearchDocIdSetIterator:(id)arg0 ;
-(void)xor__WithLongArray:(id)arg0 withInt:(int)arg1 ;
-(void)and__WithOrgApacheLuceneSearchDocIdSetIterator:(id)arg0 ;
-(BOOL)intersectsWithOrgApacheLuceneUtilFixedBitSet:(id)arg0 ;
-(void)and__WithOrgApacheLuceneUtilFixedBitSet:(id)arg0 ;
-(void)and__WithLongArray:(id)arg0 withInt:(int)arg1 ;
-(void)andNotWithOrgApacheLuceneSearchDocIdSetIterator:(id)arg0 ;
-(void)andNotWithOrgApacheLuceneUtilFixedBitSet:(id)arg0 ;
-(void)andNotWithLongArray:(id)arg0 withInt:(int)arg1 ;
-(BOOL)scanIsEmpty;
-(void)flipWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)flipWithInt:(int)arg0 ;
-(void)setWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)clearWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)clone;
-(BOOL)isEqual:(id)arg0 ;
-(void)dealloc;
+(id)ensureCapacityWithOrgApacheLuceneUtilFixedBitSet:(id)arg0 withInt:(int)arg1 ;
+(int)bits2wordsWithInt:(int)arg0 ;
+(NSInteger)intersectionCountWithOrgApacheLuceneUtilFixedBitSet:(id)arg0 withOrgApacheLuceneUtilFixedBitSet:(id)arg1 ;
+(NSInteger)unionCountWithOrgApacheLuceneUtilFixedBitSet:(id)arg0 withOrgApacheLuceneUtilFixedBitSet:(id)arg1 ;
+(NSInteger)andNotCountWithOrgApacheLuceneUtilFixedBitSet:(id)arg0 withOrgApacheLuceneUtilFixedBitSet:(id)arg1 ;
+(void)initialize;


@end


#endif