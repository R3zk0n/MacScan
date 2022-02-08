// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPACKEDPACKED64_H
#define ORGAPACHELUCENEUTILPACKEDPACKED64_H

@class MutableImpl;


#import "IOSLongArray.h"

@interface OrgApacheLuceneUtilPackedPacked64 : MutableImpl {
    IOSLongArray *blocks_;
    NSInteger maskRight_;
    int bpvMinusBlockSize_;
}




-(id)initWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)initWithInt:(int)arg0 withOrgApacheLuceneStoreDataInput:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(NSInteger)getWithInt:(int)arg0 ;
-(int)getWithInt:(int)arg0 withLongArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)setWithInt:(int)arg0 withLong:(NSInteger)arg1 ;
-(int)setWithInt:(int)arg0 withLongArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(id)description;
-(NSInteger)ramBytesUsed;
-(void)fillWithInt:(int)arg0 withInt:(int)arg1 withLong:(NSInteger)arg2 ;
-(void)clear;
-(void)dealloc;


@end


#endif