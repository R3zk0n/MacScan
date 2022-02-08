// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTOREBYTEARRAYDATAINPUT_H
#define ORGAPACHELUCENESTOREBYTEARRAYDATAINPUT_H



#import "OrgApacheLuceneStoreDataInput.h"
#import "IOSByteArray.h"

@interface OrgApacheLuceneStoreByteArrayDataInput : OrgApacheLuceneStoreDataInput {
    IOSByteArray *bytes_;
    int pos_;
    int limit_;
}




-(id)initWithByteArray:(id)arg0 ;
-(id)initWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)init;
-(void)resetWithByteArray:(id)arg0 ;
-(void)rewind;
-(int)getPosition;
-(void)setPositionWithInt:(int)arg0 ;
-(void)resetWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(int)length;
-(BOOL)eof;
-(void)skipBytesWithLong:(NSInteger)arg0 ;
-(short)readShort;
-(int)readInt;
-(NSInteger)readLong;
-(int)readVInt;
-(NSInteger)readVLong;
-(char)readByte;
-(void)readBytesWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)dealloc;


@end


#endif