#ifndef _TUNNEL_MIB_
#define _TUNNEL_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace TUNNEL_MIB {

class TUNNELMIB : public ydk::Entity
{
    public:
        TUNNELMIB();
        ~TUNNELMIB();

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

        class TunnelIfTable; //type: TUNNELMIB::TunnelIfTable
        class TunnelConfigTable; //type: TUNNELMIB::TunnelConfigTable
        class TunnelInetConfigTable; //type: TUNNELMIB::TunnelInetConfigTable

        std::shared_ptr<cisco_ios_xe::TUNNEL_MIB::TUNNELMIB::TunnelIfTable> tunneliftable;
        std::shared_ptr<cisco_ios_xe::TUNNEL_MIB::TUNNELMIB::TunnelConfigTable> tunnelconfigtable;
        std::shared_ptr<cisco_ios_xe::TUNNEL_MIB::TUNNELMIB::TunnelInetConfigTable> tunnelinetconfigtable;
        
}; // TUNNELMIB


class TUNNELMIB::TunnelIfTable : public ydk::Entity
{
    public:
        TunnelIfTable();
        ~TunnelIfTable();

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

        class TunnelIfEntry; //type: TUNNELMIB::TunnelIfTable::TunnelIfEntry

        ydk::YList tunnelifentry;
        
}; // TUNNELMIB::TunnelIfTable


class TUNNELMIB::TunnelIfTable::TunnelIfEntry : public ydk::Entity
{
    public:
        TunnelIfEntry();
        ~TunnelIfEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf tunneliflocaladdress; //type: string
        ydk::YLeaf tunnelifremoteaddress; //type: string
        ydk::YLeaf tunnelifencapsmethod; //type: IANAtunnelType
        ydk::YLeaf tunnelifhoplimit; //type: int32
        ydk::YLeaf tunnelifsecurity; //type: TunnelIfSecurity
        ydk::YLeaf tunneliftos; //type: int32
        ydk::YLeaf tunnelifflowlabel; //type: int32
        ydk::YLeaf tunnelifaddresstype; //type: InetAddressType
        ydk::YLeaf tunneliflocalinetaddress; //type: binary
        ydk::YLeaf tunnelifremoteinetaddress; //type: binary
        ydk::YLeaf tunnelifencapslimit; //type: int32
        class TunnelIfSecurity;

}; // TUNNELMIB::TunnelIfTable::TunnelIfEntry


class TUNNELMIB::TunnelConfigTable : public ydk::Entity
{
    public:
        TunnelConfigTable();
        ~TunnelConfigTable();

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

        class TunnelConfigEntry; //type: TUNNELMIB::TunnelConfigTable::TunnelConfigEntry

        ydk::YList tunnelconfigentry;
        
}; // TUNNELMIB::TunnelConfigTable


class TUNNELMIB::TunnelConfigTable::TunnelConfigEntry : public ydk::Entity
{
    public:
        TunnelConfigEntry();
        ~TunnelConfigEntry();

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

        ydk::YLeaf tunnelconfiglocaladdress; //type: string
        ydk::YLeaf tunnelconfigremoteaddress; //type: string
        ydk::YLeaf tunnelconfigencapsmethod; //type: IANAtunnelType
        ydk::YLeaf tunnelconfigid; //type: int32
        ydk::YLeaf tunnelconfigifindex; //type: int32
        ydk::YLeaf tunnelconfigstatus; //type: RowStatus

}; // TUNNELMIB::TunnelConfigTable::TunnelConfigEntry


class TUNNELMIB::TunnelInetConfigTable : public ydk::Entity
{
    public:
        TunnelInetConfigTable();
        ~TunnelInetConfigTable();

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

        class TunnelInetConfigEntry; //type: TUNNELMIB::TunnelInetConfigTable::TunnelInetConfigEntry

        ydk::YList tunnelinetconfigentry;
        
}; // TUNNELMIB::TunnelInetConfigTable


class TUNNELMIB::TunnelInetConfigTable::TunnelInetConfigEntry : public ydk::Entity
{
    public:
        TunnelInetConfigEntry();
        ~TunnelInetConfigEntry();

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

        ydk::YLeaf tunnelinetconfigaddresstype; //type: InetAddressType
        ydk::YLeaf tunnelinetconfiglocaladdress; //type: binary
        ydk::YLeaf tunnelinetconfigremoteaddress; //type: binary
        ydk::YLeaf tunnelinetconfigencapsmethod; //type: IANAtunnelType
        ydk::YLeaf tunnelinetconfigid; //type: int32
        ydk::YLeaf tunnelinetconfigifindex; //type: int32
        ydk::YLeaf tunnelinetconfigstatus; //type: RowStatus
        ydk::YLeaf tunnelinetconfigstoragetype; //type: StorageType

}; // TUNNELMIB::TunnelInetConfigTable::TunnelInetConfigEntry

class TUNNELMIB::TunnelIfTable::TunnelIfEntry::TunnelIfSecurity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ipsec;
        static const ydk::Enum::YLeaf other;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "ipsec") return 2;
            if (name == "other") return 3;
            return -1;
        }
};


}
}

#endif /* _TUNNEL_MIB_ */

