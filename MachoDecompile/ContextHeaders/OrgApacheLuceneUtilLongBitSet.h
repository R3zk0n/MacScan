// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILLONGBITSET_H
#define ORGAPACHELUCENEUTILLONGBITSET_H


#import <Foundation/Foundation.h>

#import "IOSLongArray.h"

@interface OrgApacheLuceneUtilLongBitSet : NSObject {
    IOSLongArray *bits_;
    NSInteger numBits_;
    int numWords_;
}




-(id)initWithLong:(NSInteger)arg0 ;
-(id)initWithLongArray:(id)arg0 withLong:(NSInteger)arg1 ;
-(BOOL)verifyGhostBitsClear;
-(NSInteger)length;
-(id)getBits;
-(NSInteger)cardinality;
-(BOOL)getWithLong:(NSInteger)arg0 ;
-(void)setWithLong:(NSInteger)arg0 ;
-(BOOL)getAndSetWithLong:(NSInteger)arg0 ;
-(void)clearWithLong:(NSInteger)arg0 ;
-(BOOL)getAndClearWithLong:(NSInteger)arg0 ;
-(NSInteger)nextSetBitWithLong:(NSInteger)arg0 ;
-(NSInteger)prevSetBitWithLong:(NSInteger)arg0 ;
-(void)or__WithOrgApacheLuceneUtilLongBitSet:(id)arg0 ;
-(void)xor__WithOrgApacheLuceneUtilLongBitSet:(id)arg0 ;
-(BOOL)intersectsWithOrgApacheLuceneUtilLongBitSet:(id)arg0 ;
-(void)and__WithOrgApacheLuceneUtilLongBitSet:(id)arg0 ;
-(void)andNotWithOrgApacheLuceneUtilLongBitSet:(id)arg0 ;
-(BOOL)scanIsEmpty;
-(void)flipWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 ;
-(void)flipWithLong:(NSInteger)arg0 ;
-(void)setWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 ;
-(void)clearWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 ;
-(id)clone;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(void)dealloc;
+(id)ensureCapacityWithOrgApacheLuceneUtilLongBitSet:(id)arg0 withLong:(NSInteger)arg1 ;
+(int)bits2wordsWithLong:(NSInteger)arg0 ;


@end


#endif