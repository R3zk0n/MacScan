// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILFSTBYTESSTORE_$2_H
#define ORGAPACHELUCENEUTILFSTBYTESSTORE_$2_H

@class BytesReader;


#import "OrgApacheLuceneUtilFstBytesStore.h"
#import "IOSByteArray.h"

@interface OrgApacheLuceneUtilFstBytesStore_$2 : BytesReader {
    OrgApacheLuceneUtilFstBytesStore *this$0_;
    IOSByteArray *current_;
    int nextBuffer_;
    int nextRead_;
}




-(char)readByte;
-(void)skipBytesWithLong:(NSInteger)arg0 ;
-(void)readBytesWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(NSInteger)getPosition;
-(void)setPositionWithLong:(NSInteger)arg0 ;
-(BOOL)reversed;
-(id)initWithOrgApacheLuceneUtilFstBytesStore:(id)arg0 ;
-(void)dealloc;


@end


#endif