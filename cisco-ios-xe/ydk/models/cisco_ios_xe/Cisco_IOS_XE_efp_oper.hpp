#ifndef _CISCO_IOS_XE_EFP_OPER_
#define _CISCO_IOS_XE_EFP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_efp_oper {

class EfpStats : public ydk::Entity
{
    public:
        EfpStats();
        ~EfpStats();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class EfpStat; //type: EfpStats::EfpStat

        std::vector<std::shared_ptr<Cisco_IOS_XE_efp_oper::EfpStats::EfpStat> > efp_stat;
        
}; // EfpStats


class EfpStats::EfpStat : public ydk::Entity
{
    public:
        EfpStat();
        ~EfpStat();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf interface; //type: string
        ydk::YLeaf in_pkts; //type: uint64
        ydk::YLeaf in_bytes; //type: uint64
        ydk::YLeaf out_pkts; //type: uint64
        ydk::YLeaf out_bytes; //type: uint64

}; // EfpStats::EfpStat


}
}

#endif /* _CISCO_IOS_XE_EFP_OPER_ */

