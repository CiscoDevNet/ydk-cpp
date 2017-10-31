#ifndef _CISCO_IOS_XR_IP_IEP_CFG_
#define _CISCO_IOS_XR_IP_IEP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_iep_cfg {

class IpExplicitPaths : public ydk::Entity
{
    public:
        IpExplicitPaths();
        ~IpExplicitPaths();

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

        class Paths; //type: IpExplicitPaths::Paths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths::Paths> paths;
        
}; // IpExplicitPaths


class IpExplicitPaths::Paths : public ydk::Entity
{
    public:
        Paths();
        ~Paths();

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

        class Path; //type: IpExplicitPaths::Paths::Path

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths::Paths::Path> > path;
        
}; // IpExplicitPaths::Paths


class IpExplicitPaths::Paths::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

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

        ydk::YLeaf type; //type: IpIepPath
        class Name; //type: IpExplicitPaths::Paths::Path::Name
        class Identifier; //type: IpExplicitPaths::Paths::Path::Identifier

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths::Paths::Path::Name> > name;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths::Paths::Path::Identifier> > identifier;
        
}; // IpExplicitPaths::Paths::Path


class IpExplicitPaths::Paths::Path::Name : public ydk::Entity
{
    public:
        Name();
        ~Name();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf disable; //type: empty
        class Hops; //type: IpExplicitPaths::Paths::Path::Name::Hops

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths::Paths::Path::Name::Hops> hops;
        
}; // IpExplicitPaths::Paths::Path::Name


class IpExplicitPaths::Paths::Path::Name::Hops : public ydk::Entity
{
    public:
        Hops();
        ~Hops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hop; //type: IpExplicitPaths::Paths::Path::Name::Hops::Hop

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths::Paths::Path::Name::Hops::Hop> > hop;
        
}; // IpExplicitPaths::Paths::Path::Name::Hops


class IpExplicitPaths::Paths::Path::Name::Hops::Hop : public ydk::Entity
{
    public:
        Hop();
        ~Hop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_number; //type: uint32
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf hop_type; //type: IpIepHop
        ydk::YLeaf if_index; //type: int32
        ydk::YLeaf num_type; //type: IpIepNum
        ydk::YLeaf mpls_label; //type: uint32

}; // IpExplicitPaths::Paths::Path::Name::Hops::Hop


class IpExplicitPaths::Paths::Path::Identifier : public ydk::Entity
{
    public:
        Identifier();
        ~Identifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf disable; //type: empty
        class Hops; //type: IpExplicitPaths::Paths::Path::Identifier::Hops

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths::Paths::Path::Identifier::Hops> hops;
        
}; // IpExplicitPaths::Paths::Path::Identifier


class IpExplicitPaths::Paths::Path::Identifier::Hops : public ydk::Entity
{
    public:
        Hops();
        ~Hops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hop; //type: IpExplicitPaths::Paths::Path::Identifier::Hops::Hop

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths::Paths::Path::Identifier::Hops::Hop> > hop;
        
}; // IpExplicitPaths::Paths::Path::Identifier::Hops


class IpExplicitPaths::Paths::Path::Identifier::Hops::Hop : public ydk::Entity
{
    public:
        Hop();
        ~Hop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_number; //type: uint32
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf hop_type; //type: IpIepHop
        ydk::YLeaf if_index; //type: int32
        ydk::YLeaf num_type; //type: IpIepNum
        ydk::YLeaf mpls_label; //type: uint32

}; // IpExplicitPaths::Paths::Path::Identifier::Hops::Hop

class IpIepNum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unnumbered;
        static const ydk::Enum::YLeaf numbered;

};

class IpIepHop : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf next_strict;
        static const ydk::Enum::YLeaf next_loose;
        static const ydk::Enum::YLeaf exclude;
        static const ydk::Enum::YLeaf exclude_srlg;
        static const ydk::Enum::YLeaf next_label;

};

class IpIepPath : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf identifier;
        static const ydk::Enum::YLeaf name;

};


}
}

#endif /* _CISCO_IOS_XR_IP_IEP_CFG_ */

