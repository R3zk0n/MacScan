// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSDOCVALUESFORMAT_H
#define ORGAPACHELUCENECODECSDOCVALUESFORMAT_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilNamedSPILoader_NamedSPI-Protocol.h"

@interface OrgApacheLuceneCodecsDocValuesFormat : NSObject <OrgApacheLuceneUtilNamedSPILoader_NamedSPI>

 {
    NSString *name_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithNSString:(id)arg0 ;
-(id)getName;
-(void)dealloc;
+(id)forNameWithNSString:(id)arg0 ;
+(id)availableDocValuesFormats;
+(void)reloadDocValuesFormatsWithJavaLangClassLoader:(id)arg0 ;


@end


#endif