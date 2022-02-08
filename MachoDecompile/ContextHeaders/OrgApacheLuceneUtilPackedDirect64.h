// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPACKEDDIRECT64_H
#define ORGAPACHELUCENEUTILPACKEDDIRECT64_H

@class MutableImpl;


#import "IOSLongArray.h"

@interface OrgApacheLuceneUtilPackedDirect64 : MutableImpl {
    IOSLongArray *values_;
}




-(id)initWithInt:(int)arg0 ;
-(id)initWithInt:(int)arg0 withOrgApacheLuceneStoreDataInput:(id)arg1 withInt:(int)arg2 ;
-(NSInteger)getWithInt:(int)arg0 ;
-(void)setWithInt:(int)arg0 withLong:(NSInteger)arg1 ;
-(NSInteger)ramBytesUsed;
-(void)clear;
-(int)getWithInt:(int)arg0 withLongArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(int)setWithInt:(int)arg0 withLongArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)fillWithInt:(int)arg0 withInt:(int)arg1 withLong:(NSInteger)arg2 ;
-(void)dealloc;


@end


#endif