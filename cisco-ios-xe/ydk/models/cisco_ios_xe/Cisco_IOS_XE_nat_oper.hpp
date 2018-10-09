#ifndef _CISCO_IOS_XE_NAT_OPER_
#define _CISCO_IOS_XE_NAT_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_nat_oper {

class NatData : public ydk::Entity
{
    public:
        NatData();
        ~NatData();

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

        class IpNatStatistics; //type: NatData::IpNatStatistics
        class IpNatTranslation; //type: NatData::IpNatTranslation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_nat_oper::NatData::IpNatStatistics> ip_nat_statistics; // presence node
        ydk::YList ip_nat_translation;
        
}; // NatData


class NatData::IpNatStatistics : public ydk::Entity
{
    public:
        IpNatStatistics();
        ~IpNatStatistics();

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

        ydk::YLeaf initialized; //type: boolean
        ydk::YLeaf entries; //type: uint64
        ydk::YLeaf statics; //type: uint64
        ydk::YLeaf flows; //type: uint64
        ydk::YLeaf insides; //type: uint64
        ydk::YLeaf outsides; //type: uint64
        ydk::YLeaf entry_timeouts; //type: uint64
        ydk::YLeaf hits; //type: uint64
        ydk::YLeaf misses; //type: uint64
        ydk::YLeaf interrupt_switched; //type: uint64
        ydk::YLeaf packets_punted; //type: uint64
        ydk::YLeaf frag_pak_count; //type: uint64
        ydk::YLeaf pool_stats_drop; //type: uint64
        ydk::YLeaf mapping_stats_drop; //type: uint64
        ydk::YLeaf portlist_req_fail; //type: uint64
        ydk::YLeaf ipalias_add_fail; //type: uint64
        ydk::YLeaf limit_entry_add_fail; //type: uint64
        ydk::YLeaf in2out_drops; //type: uint64
        ydk::YLeaf out2in_drops; //type: uint64
        ydk::YLeaf mib_addr_binds; //type: uint32
        ydk::YLeaf mib_addport_binds; //type: uint32
        ydk::YLeafList statics_sorted; //type: list of  uint64

}; // NatData::IpNatStatistics


class NatData::IpNatTranslation : public ydk::Entity
{
    public:
        IpNatTranslation();
        ~IpNatTranslation();

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

        ydk::YLeaf inside_local_addr; //type: string
        ydk::YLeaf outside_local_addr; //type: string
        ydk::YLeaf inside_local_port; //type: uint16
        ydk::YLeaf outside_local_port; //type: uint16
        ydk::YLeaf vrfid; //type: uint16
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf inside_global_addr; //type: string
        ydk::YLeaf outside_global_addr; //type: string
        ydk::YLeaf inside_global_port; //type: uint16
        ydk::YLeaf outside_global_port; //type: uint16
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf application_type; //type: uint8
        ydk::YLeaf vrf_name; //type: string

}; // NatData::IpNatTranslation


}
}

#endif /* _CISCO_IOS_XE_NAT_OPER_ */

