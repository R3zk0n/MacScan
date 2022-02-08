// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPACKEDGROWABLEWRITER_H
#define ORGAPACHELUCENEUTILPACKEDGROWABLEWRITER_H

@class Mutable;


#import "OrgApacheLuceneUtilPackedPackedInts_Mutable.h"

@interface OrgApacheLuceneUtilPackedGrowableWriter : Mutable {
    NSInteger currentMask_;
    OrgApacheLuceneUtilPackedPackedInts_Mutable *current_;
    float acceptableOverheadRatio_;
}




-(id)initWithInt:(int)arg0 withInt:(int)arg1 withFloat:(float)arg2 ;
-(NSInteger)getWithInt:(int)arg0 ;
-(int)size;
-(int)getBitsPerValue;
-(id)getMutable;
-(void)ensureCapacityWithLong:(NSInteger)arg0 ;
-(void)setWithInt:(int)arg0 withLong:(NSInteger)arg1 ;
-(void)clear;
-(id)resizeWithInt:(int)arg0 ;
-(int)getWithInt:(int)arg0 withLongArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(int)setWithInt:(int)arg0 withLongArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)fillWithInt:(int)arg0 withInt:(int)arg1 withLong:(NSInteger)arg2 ;
-(NSInteger)ramBytesUsed;
-(void)saveWithOrgApacheLuceneStoreDataOutput:(id)arg0 ;
-(void)dealloc;


@end


#endif