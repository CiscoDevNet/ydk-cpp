#ifndef _CISCO_IOS_XR_FREQSYNC_OPER_1_
#define _CISCO_IOS_XR_FREQSYNC_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_freqsync_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_freqsync_oper {


class FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::GnssReceiverId : public ydk::Entity
{
    public:
        GnssReceiverId();
        ~GnssReceiverId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf clock_name; //type: string

}; // FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::GnssReceiverId


class FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel : public ydk::Entity
{
    public:
        QualityLevel();
        ~QualityLevel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf quality_level_option; //type: FsyncBagQlOption
        ydk::YLeaf option1_value; //type: FsyncBagQlO1Value
        ydk::YLeaf option2_generation1_value; //type: FsyncBagQlO2G1Value
        ydk::YLeaf option2_generation2_value; //type: FsyncBagQlO2G2Value

}; // FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel


}
}

#endif /* _CISCO_IOS_XR_FREQSYNC_OPER_1_ */

