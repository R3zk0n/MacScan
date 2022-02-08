// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTOREBUFFEREDINDEXINPUT_SLICEDINDEXINPUT_H
#define ORGAPACHELUCENESTOREBUFFEREDINDEXINPUT_SLICEDINDEXINPUT_H



#import "OrgApacheLuceneStoreBufferedIndexInput.h"
#import "OrgApacheLuceneStoreIndexInput.h"

@interface OrgApacheLuceneStoreBufferedIndexInput_SlicedIndexInput : OrgApacheLuceneStoreBufferedIndexInput {
    OrgApacheLuceneStoreIndexInput *base_;
    NSInteger fileOffset_;
    NSInteger length_;
}




-(id)initWithNSString:(id)arg0 withOrgApacheLuceneStoreIndexInput:(id)arg1 withLong:(NSInteger)arg2 withLong:(NSInteger)arg3 ;
-(id)clone;
-(void)readInternalWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)seekInternalWithLong:(NSInteger)arg0 ;
-(void)close;
-(NSInteger)length;
-(void)dealloc;


@end


#endif