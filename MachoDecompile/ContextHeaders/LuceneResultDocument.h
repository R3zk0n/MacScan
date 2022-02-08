// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LUCENERESULTDOCUMENT_H
#define LUCENERESULTDOCUMENT_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneDocumentDocument.h"
#import "LuceneContextRequest.h"

@interface LuceneResultDocument : NSObject {
    int _docId;
    OrgApacheLuceneDocumentDocument *_doc;
    NSString *_title;
}


@property (__weak, nonatomic) LuceneContextRequest *request; // ivar: _request
@property (nonatomic) char titleHasControlCharacter; // ivar: _titleHasControlCharacter
@property (nonatomic) NSUInteger titleMinTermsRequired; // ivar: _titleMinTermsRequired
@property (nonatomic) NSUInteger minPrimaryTermsRequired; // ivar: _minPrimaryTermsRequired
@property (nonatomic) int seeOtherDocIdRelative; // ivar: _seeOtherDocIdRelative


-(id)initWithDocId:(int)arg0 withLuceneContextRequest:(id)arg1 ;
-(id)getDocument;
-(id)titleField;
-(id)bestTitleWithSeeOtherDocIdRelative:(*int)arg0 ;


@end


#endif