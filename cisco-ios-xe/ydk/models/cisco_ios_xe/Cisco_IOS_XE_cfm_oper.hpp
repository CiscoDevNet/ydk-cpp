#ifndef _CISCO_IOS_XE_CFM_OPER_
#define _CISCO_IOS_XE_CFM_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_cfm_oper {

class CfmStatistics : public ydk::Entity
{
    public:
        CfmStatistics();
        ~CfmStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class CfmMeps; //type: CfmStatistics::CfmMeps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_cfm_oper::CfmStatistics::CfmMeps> cfm_meps;
        
}; // CfmStatistics


class CfmStatistics::CfmMeps : public ydk::Entity
{
    public:
        CfmMeps();
        ~CfmMeps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CfmMep; //type: CfmStatistics::CfmMeps::CfmMep

        ydk::YList cfm_mep;
        
}; // CfmStatistics::CfmMeps


class CfmStatistics::CfmMeps::CfmMep : public ydk::Entity
{
    public:
        CfmMep();
        ~CfmMep();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf ma_name; //type: string
        ydk::YLeaf mpid; //type: uint32
        ydk::YLeaf ccm_transmitted; //type: uint64
        ydk::YLeaf ccm_seq_errors; //type: uint64
        ydk::YLeaf ltr_unexpected; //type: uint64
        ydk::YLeaf lbr_transmitted; //type: uint64
        ydk::YLeaf lbr_seq_errors; //type: uint64
        ydk::YLeaf lbr_received_ok; //type: uint64
        ydk::YLeaf lbr_received_bad; //type: uint64
        class LastCleared; //type: CfmStatistics::CfmMeps::CfmMep::LastCleared

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_cfm_oper::CfmStatistics::CfmMeps::CfmMep::LastCleared> last_cleared;
        
}; // CfmStatistics::CfmMeps::CfmMep


class CfmStatistics::CfmMeps::CfmMep::LastCleared : public ydk::Entity
{
    public:
        LastCleared();
        ~LastCleared();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf never; //type: empty
        ydk::YLeaf time; //type: string

}; // CfmStatistics::CfmMeps::CfmMep::LastCleared

class CfmLastClearedType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never_cleared;
        static const ydk::Enum::YLeaf cleared_before;

};


}
}

#endif /* _CISCO_IOS_XE_CFM_OPER_ */

