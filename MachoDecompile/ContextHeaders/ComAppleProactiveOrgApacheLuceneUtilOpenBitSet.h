// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLEPROACTIVEORGAPACHELUCENEUTILOPENBITSET_H
#define COMAPPLEPROACTIVEORGAPACHELUCENEUTILOPENBITSET_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchDocIdSet.h"
#import "IOSLongArray.h"
#import "OrgApacheLuceneUtilBits-Protocol.h"
#import "NSCopying-Protocol.h"

@interface ComAppleProactiveOrgApacheLuceneUtilOpenBitSet : OrgApacheLuceneSearchDocIdSet <OrgApacheLuceneUtilBits, NSCopying>

 {
    IOSLongArray *bits_;
    int wlen_;
    NSInteger numBits_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithLong:(NSInteger)arg0 ;
-(id)init;
-(id)initWithLongArray:(id)arg0 withInt:(int)arg1 ;
-(id)iterator;
-(id)bits;
-(BOOL)isCacheable;
-(NSInteger)ramBytesUsed;
-(NSInteger)capacity;
-(NSInteger)size;
-(int)length;
-(BOOL)isEmpty;
-(id)getBits;
-(int)getNumWords;
-(BOOL)getWithInt:(int)arg0 ;
-(BOOL)fastGetWithInt:(int)arg0 ;
-(BOOL)getWithLong:(NSInteger)arg0 ;
-(BOOL)fastGetWithLong:(NSInteger)arg0 ;
-(int)getBitWithInt:(int)arg0 ;
-(void)setWithLong:(NSInteger)arg0 ;
-(void)fastSetWithInt:(int)arg0 ;
-(void)fastSetWithLong:(NSInteger)arg0 ;
-(void)setWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 ;
-(int)expandingWordNumWithLong:(NSInteger)arg0 ;
-(void)fastClearWithInt:(int)arg0 ;
-(void)fastClearWithLong:(NSInteger)arg0 ;
-(void)clearWithLong:(NSInteger)arg0 ;
-(void)clearWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)clearWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 ;
-(BOOL)getAndSetWithInt:(int)arg0 ;
-(BOOL)getAndSetWithLong:(NSInteger)arg0 ;
-(void)fastFlipWithInt:(int)arg0 ;
-(void)fastFlipWithLong:(NSInteger)arg0 ;
-(void)flipWithLong:(NSInteger)arg0 ;
-(BOOL)flipAndGetWithInt:(int)arg0 ;
-(BOOL)flipAndGetWithLong:(NSInteger)arg0 ;
-(void)flipWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 ;
-(NSInteger)cardinality;
-(int)nextSetBitWithInt:(int)arg0 ;
-(NSInteger)nextSetBitWithLong:(NSInteger)arg0 ;
-(int)prevSetBitWithInt:(int)arg0 ;
-(NSInteger)prevSetBitWithLong:(NSInteger)arg0 ;
-(id)clone;
-(void)intersectWithComAppleProactiveOrgApacheLuceneUtilOpenBitSet:(id)arg0 ;
-(void)union__WithComAppleProactiveOrgApacheLuceneUtilOpenBitSet:(id)arg0 ;
-(void)removeWithComAppleProactiveOrgApacheLuceneUtilOpenBitSet:(id)arg0 ;
-(void)xor__WithComAppleProactiveOrgApacheLuceneUtilOpenBitSet:(id)arg0 ;
-(void)and__WithComAppleProactiveOrgApacheLuceneUtilOpenBitSet:(id)arg0 ;
-(void)or__WithComAppleProactiveOrgApacheLuceneUtilOpenBitSet:(id)arg0 ;
-(void)andNotWithComAppleProactiveOrgApacheLuceneUtilOpenBitSet:(id)arg0 ;
-(BOOL)intersectsWithComAppleProactiveOrgApacheLuceneUtilOpenBitSet:(id)arg0 ;
-(void)ensureCapacityWordsWithInt:(int)arg0 ;
-(void)ensureCapacityWithLong:(NSInteger)arg0 ;
-(void)trimTrailingZeros;
-(BOOL)isEqual:(id)arg0 ;
-(void)dealloc;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(NSInteger)intersectionCountWithComAppleProactiveOrgApacheLuceneUtilOpenBitSet:(id)arg0 withComAppleProactiveOrgApacheLuceneUtilOpenBitSet:(id)arg1 ;
+(NSInteger)unionCountWithComAppleProactiveOrgApacheLuceneUtilOpenBitSet:(id)arg0 withComAppleProactiveOrgApacheLuceneUtilOpenBitSet:(id)arg1 ;
+(NSInteger)andNotCountWithComAppleProactiveOrgApacheLuceneUtilOpenBitSet:(id)arg0 withComAppleProactiveOrgApacheLuceneUtilOpenBitSet:(id)arg1 ;
+(NSInteger)xorCountWithComAppleProactiveOrgApacheLuceneUtilOpenBitSet:(id)arg0 withComAppleProactiveOrgApacheLuceneUtilOpenBitSet:(id)arg1 ;
+(int)bits2wordsWithLong:(NSInteger)arg0 ;
+(void)initialize;


@end


#endif