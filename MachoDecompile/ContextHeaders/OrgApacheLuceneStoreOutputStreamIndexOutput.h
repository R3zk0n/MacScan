// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTOREOUTPUTSTREAMINDEXOUTPUT_H
#define ORGAPACHELUCENESTOREOUTPUTSTREAMINDEXOUTPUT_H



#import "OrgApacheLuceneStoreIndexOutput.h"
#import "JavaUtilZipCRC32.h"
#import "JavaIoBufferedOutputStream.h"

@interface OrgApacheLuceneStoreOutputStreamIndexOutput : OrgApacheLuceneStoreIndexOutput {
    JavaUtilZipCRC32 *crc_;
    JavaIoBufferedOutputStream *os_;
    NSInteger bytesWritten_;
    BOOL flushedOnClose_;
}




-(id)initWithNSString:(id)arg0 withJavaIoOutputStream:(id)arg1 withInt:(int)arg2 ;
-(void)writeByteWithByte:(char)arg0 ;
-(void)writeBytesWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)close;
-(NSInteger)getFilePointer;
-(NSInteger)getChecksum;
-(void)dealloc;


@end


#endif