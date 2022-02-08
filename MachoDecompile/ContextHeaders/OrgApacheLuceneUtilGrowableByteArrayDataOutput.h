// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILGROWABLEBYTEARRAYDATAOUTPUT_H
#define ORGAPACHELUCENEUTILGROWABLEBYTEARRAYDATAOUTPUT_H



#import "OrgApacheLuceneStoreDataOutput.h"
#import "IOSByteArray.h"

@interface OrgApacheLuceneUtilGrowableByteArrayDataOutput : OrgApacheLuceneStoreDataOutput {
    IOSByteArray *bytes_;
    int length_;
}




-(id)initWithInt:(int)arg0 ;
-(void)writeByteWithByte:(char)arg0 ;
-(void)writeBytesWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)dealloc;


@end


#endif