// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSLUCENE53AAPL53CODEC_H
#define ORGAPACHELUCENECODECSLUCENE53AAPL53CODEC_H



#import "OrgApacheLuceneCodecsCodec.h"
#import "OrgApacheLuceneCodecsTermVectorsFormat.h"
#import "OrgApacheLuceneCodecsFieldInfosFormat.h"
#import "OrgApacheLuceneCodecsSegmentInfoFormat.h"
#import "OrgApacheLuceneCodecsLiveDocsFormat.h"
#import "OrgApacheLuceneCodecsCompoundFormat.h"
#import "OrgApacheLuceneCodecsPostingsFormat.h"
#import "OrgApacheLuceneCodecsDocValuesFormat.h"
#import "OrgApacheLuceneCodecsStoredFieldsFormat.h"
#import "OrgApacheLuceneCodecsNormsFormat.h"

@interface OrgApacheLuceneCodecsLucene53AAPL53Codec : OrgApacheLuceneCodecsCodec {
    OrgApacheLuceneCodecsTermVectorsFormat *vectorsFormat_;
    OrgApacheLuceneCodecsFieldInfosFormat *fieldInfosFormat_;
    OrgApacheLuceneCodecsSegmentInfoFormat *segmentInfosFormat_;
    OrgApacheLuceneCodecsLiveDocsFormat *liveDocsFormat_;
    OrgApacheLuceneCodecsCompoundFormat *compoundFormat_;
    OrgApacheLuceneCodecsPostingsFormat *postingsFormat_;
    OrgApacheLuceneCodecsDocValuesFormat *docValuesFormat_;
    OrgApacheLuceneCodecsStoredFieldsFormat *storedFieldsFormat_;
    OrgApacheLuceneCodecsPostingsFormat *defaultFormat_;
    OrgApacheLuceneCodecsDocValuesFormat *defaultDVFormat_;
    OrgApacheLuceneCodecsNormsFormat *normsFormat_;
}




-(id)init;
-(id)initWithOrgApacheLuceneCodecsLucene50Lucene50StoredFieldsFormat_ModeEnum:(id)arg0 ;
-(id)storedFieldsFormat;
-(id)termVectorsFormat;
-(id)postingsFormat;
-(id)fieldInfosFormat;
-(id)segmentInfoFormat;
-(id)liveDocsFormat;
-(id)compoundFormat;
-(id)getPostingsFormatForFieldWithNSString:(id)arg0 ;
-(id)getDocValuesFormatForFieldWithNSString:(id)arg0 ;
-(id)docValuesFormat;
-(id)normsFormat;
-(void)dealloc;


@end


#endif