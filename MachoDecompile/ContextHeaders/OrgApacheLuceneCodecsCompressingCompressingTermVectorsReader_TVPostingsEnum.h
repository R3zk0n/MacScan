// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGTERMVECTORSREADER_TVPOSTINGSENUM_H
#define ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGTERMVECTORSREADER_TVPOSTINGSENUM_H



#import "OrgApacheLuceneIndexPostingsEnum.h"
#import "IOSIntArray.h"
#import "OrgApacheLuceneUtilBytesRef.h"

@interface OrgApacheLuceneCodecsCompressingCompressingTermVectorsReader_TVPostingsEnum : OrgApacheLuceneIndexPostingsEnum {
    int doc_;
    int termFreq_;
    int positionIndex_;
    IOSIntArray *positions_;
    IOSIntArray *startOffsets_;
    IOSIntArray *lengths_;
    OrgApacheLuceneUtilBytesRef *payload_;
    IOSIntArray *payloadIndex_;
    int basePayloadOffset_;
    int i_;
}




-(id)init;
-(void)resetWithInt:(int)arg0 withInt:(int)arg1 withIntArray:(id)arg2 withIntArray:(id)arg3 withIntArray:(id)arg4 withOrgApacheLuceneUtilBytesRef:(id)arg5 withIntArray:(id)arg6 ;
-(void)checkDoc;
-(void)checkPosition;
-(int)nextPosition;
-(int)startOffset;
-(int)endOffset;
-(id)getPayload;
-(int)freq;
-(int)docID;
-(int)nextDoc;
-(int)advanceWithInt:(int)arg0 ;
-(NSInteger)cost;
-(void)dealloc;


@end


#endif