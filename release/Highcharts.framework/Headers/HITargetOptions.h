/**
* (c) 2009-2017 Highsoft AS
*
* License: www.highcharts.com/license
* For commercial usage, a valid license is required. To purchase a license for Highcharts iOS, please see our website: https://shop.highsoft.com/
* In case of questions, please contact sales@highsoft.com
*/

#import "HIChartsJSONSerializable.h"
#import "HIColor.h"


/**
* description: Individual target options for each point.
*/
@interface HITargetOptions: HIChartsJSONSerializable

/**
* description: The color of the rectangle representing the target. When not set,
point's color (if set in point's options -
color) or zone of the target value
(if zones or
negativeColor are set)
or the same color as the point has is used.
In styled mode, use class highcharts-bullet-target instead.
*/
@property(nonatomic, readwrite) HIColor *color;
/**
* description: The border width of the rectangle representing the target.
In styled mode, use class highcharts-bullet-target instead.
*/
@property(nonatomic, readwrite) NSNumber *borderWidth;
/**
* description: The border color of the rectangle representing the target. When
not set, the  point's border color is used.
In styled mode, use class highcharts-bullet-target instead.
*/
@property(nonatomic, readwrite) HIColor *borderColor;
/**
* description: The width of the rectangle representing the target. Could be set as
a pixel value or as a percentage of a column width.
* default: 140%
*/
@property(nonatomic, readwrite) id /* NSNumber, NSString */ width;
/**
* description: The height of the rectangle representing the target.
* default: 3
*/
@property(nonatomic, readwrite) NSNumber *height;

-(NSDictionary *)getParams;

@end
