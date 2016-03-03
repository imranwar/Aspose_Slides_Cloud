#import <Foundation/Foundation.h>
#import "ASPObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "ASPDocumentProperty.h"
#import "ASPResourceUri.h"


@protocol ASPDocumentProperties
@end

@interface ASPDocumentProperties : ASPObject


@property(nonatomic) NSArray<ASPDocumentProperty>* list;

@property(nonatomic) ASPResourceUri* selfUri;

@property(nonatomic) NSArray<ASPResourceUri>* alternateLinks;

@property(nonatomic) NSArray<ASPResourceUri>* links;

@end
