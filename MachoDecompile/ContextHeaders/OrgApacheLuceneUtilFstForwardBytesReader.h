// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILFSTFORWARDBYTESREADER_H
#define ORGAPACHELUCENEUTILFSTFORWARDBYTESREADER_H

@class BytesReader;


#import "IOSByteArray.h"

@interface OrgApacheLuceneUtilFstForwardBytesReader : BytesReader {
    IOSByteArray *bytes_;
    int pos_;
}




-(id)initWithByteArray:(id)arg0 ;
-(char)readByte;
-(void)readBytesWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)skipBytesWithLong:(NSInteger)arg0 ;
-(NSInteger)getPosition;
-(void)setPositionWithLong:(NSInteger)arg0 ;
-(BOOL)reversed;
-(void)dealloc;


@end


#endif