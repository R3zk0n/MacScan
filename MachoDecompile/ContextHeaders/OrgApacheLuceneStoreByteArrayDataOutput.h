// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTOREBYTEARRAYDATAOUTPUT_H
#define ORGAPACHELUCENESTOREBYTEARRAYDATAOUTPUT_H



#import "OrgApacheLuceneStoreDataOutput.h"
#import "IOSByteArray.h"

@interface OrgApacheLuceneStoreByteArrayDataOutput : OrgApacheLuceneStoreDataOutput {
    IOSByteArray *bytes_;
    int pos_;
    int limit_;
}




-(id)initWithByteArray:(id)arg0 ;
-(id)initWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)init;
-(void)resetWithByteArray:(id)arg0 ;
-(void)resetWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(int)getPosition;
-(void)writeByteWithByte:(char)arg0 ;
-(void)writeBytesWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)dealloc;


@end


#endif