#ifndef _CISCO_IOS_XE_FIB_OPER_
#define _CISCO_IOS_XE_FIB_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_fib_oper {

class FibOperData : public ydk::Entity
{
    public:
        FibOperData();
        ~FibOperData();

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

        class FibNiEntry; //type: FibOperData::FibNiEntry

        ydk::YList fib_ni_entry;
        
}; // FibOperData


class FibOperData::FibNiEntry : public ydk::Entity
{
    public:
        FibNiEntry();
        ~FibNiEntry();

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

        ydk::YLeaf instance_name; //type: string
        ydk::YLeaf af; //type: FibAddressFamily
        ydk::YLeaf num_pfx; //type: uint32
        ydk::YLeaf num_pfx_fwd; //type: uint32
        ydk::YLeaf num_pfx_non_fwd; //type: uint32
        class FibEntries; //type: FibOperData::FibNiEntry::FibEntries

        ydk::YList fib_entries;
        
}; // FibOperData::FibNiEntry


class FibOperData::FibNiEntry::FibEntries : public ydk::Entity
{
    public:
        FibEntries();
        ~FibEntries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf instance_name; //type: string
        ydk::YLeaf af; //type: FibAddressFamily
        ydk::YLeaf num_paths; //type: uint8
        ydk::YLeaf packets_forwarded; //type: uint64
        ydk::YLeaf octets_forwarded; //type: uint64
        class FibNexthopEntries; //type: FibOperData::FibNiEntry::FibEntries::FibNexthopEntries

        ydk::YList fib_nexthop_entries;
        
}; // FibOperData::FibNiEntry::FibEntries


class FibOperData::FibNiEntry::FibEntries::FibNexthopEntries : public ydk::Entity
{
    public:
        FibNexthopEntries();
        ~FibNexthopEntries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_addr; //type: string
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf af; //type: FibAddressFamily
        ydk::YLeaf ifname; //type: string
        ydk::YLeaf path_type; //type: FibPathType
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf encap; //type: EncapsulationHeaderType
        ydk::YLeaf decap; //type: EncapsulationHeaderType

}; // FibOperData::FibNiEntry::FibEntries::FibNexthopEntries

class FibPathType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fib_path_type_unknown;
        static const ydk::Enum::YLeaf fib_path_type_receive;
        static const ydk::Enum::YLeaf fib_path_type_connected;
        static const ydk::Enum::YLeaf fib_path_type_attached_prefix;
        static const ydk::Enum::YLeaf fib_path_type_attached_host;
        static const ydk::Enum::YLeaf fib_path_type_attached_nexthop;
        static const ydk::Enum::YLeaf fib_path_type_recursive;
        static const ydk::Enum::YLeaf fib_path_type_adjacency_prefix;
        static const ydk::Enum::YLeaf fib_path_type_special_prefix;

};

class FibAddressFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fib_addr_fam_unknown;
        static const ydk::Enum::YLeaf fib_addr_fam_ipv4;
        static const ydk::Enum::YLeaf fib_addr_fam_ipv6;

};

class EncapsulationHeaderType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf encap_hdr_type_unknown;
        static const ydk::Enum::YLeaf encap_hdr_type_gre;
        static const ydk::Enum::YLeaf encap_hdr_type_ipv4;
        static const ydk::Enum::YLeaf encap_hdr_type_ipv6;
        static const ydk::Enum::YLeaf encap_hdr_type_mpls;

};


}
}

#endif /* _CISCO_IOS_XE_FIB_OPER_ */

