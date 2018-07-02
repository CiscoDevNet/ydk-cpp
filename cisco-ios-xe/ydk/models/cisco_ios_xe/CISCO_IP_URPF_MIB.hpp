#ifndef _CISCO_IP_URPF_MIB_
#define _CISCO_IP_URPF_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_IP_URPF_MIB {

class CISCOIPURPFMIB : public ydk::Entity
{
    public:
        CISCOIPURPFMIB();
        ~CISCOIPURPFMIB();

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

        class CipUrpfScalar; //type: CISCOIPURPFMIB::CipUrpfScalar
        class CipUrpfTable; //type: CISCOIPURPFMIB::CipUrpfTable
        class CipUrpfIfMonTable; //type: CISCOIPURPFMIB::CipUrpfIfMonTable
        class CipUrpfVrfIfTable; //type: CISCOIPURPFMIB::CipUrpfVrfIfTable
        class CipUrpfVrfTable; //type: CISCOIPURPFMIB::CipUrpfVrfTable

        std::shared_ptr<cisco_ios_xe::CISCO_IP_URPF_MIB::CISCOIPURPFMIB::CipUrpfScalar> cipurpfscalar;
        std::shared_ptr<cisco_ios_xe::CISCO_IP_URPF_MIB::CISCOIPURPFMIB::CipUrpfTable> cipurpftable;
        std::shared_ptr<cisco_ios_xe::CISCO_IP_URPF_MIB::CISCOIPURPFMIB::CipUrpfIfMonTable> cipurpfifmontable;
        std::shared_ptr<cisco_ios_xe::CISCO_IP_URPF_MIB::CISCOIPURPFMIB::CipUrpfVrfIfTable> cipurpfvrfiftable;
        std::shared_ptr<cisco_ios_xe::CISCO_IP_URPF_MIB::CISCOIPURPFMIB::CipUrpfVrfTable> cipurpfvrftable;
        
}; // CISCOIPURPFMIB


class CISCOIPURPFMIB::CipUrpfScalar : public ydk::Entity
{
    public:
        CipUrpfScalar();
        ~CipUrpfScalar();

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

        ydk::YLeaf cipurpfdropratewindow; //type: int32
        ydk::YLeaf cipurpfcomputeinterval; //type: int32
        ydk::YLeaf cipurpfdropnotifyholddowntime; //type: int32

}; // CISCOIPURPFMIB::CipUrpfScalar


class CISCOIPURPFMIB::CipUrpfTable : public ydk::Entity
{
    public:
        CipUrpfTable();
        ~CipUrpfTable();

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

        class CipUrpfEntry; //type: CISCOIPURPFMIB::CipUrpfTable::CipUrpfEntry

        ydk::YList cipurpfentry;
        
}; // CISCOIPURPFMIB::CipUrpfTable


class CISCOIPURPFMIB::CipUrpfTable::CipUrpfEntry : public ydk::Entity
{
    public:
        CipUrpfEntry();
        ~CipUrpfEntry();

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

        ydk::YLeaf cipurpfipversion; //type: CipUrpfIpVersion
        ydk::YLeaf cipurpfdrops; //type: uint32
        ydk::YLeaf cipurpfdroprate; //type: uint32
        class CipUrpfIpVersion;

}; // CISCOIPURPFMIB::CipUrpfTable::CipUrpfEntry


class CISCOIPURPFMIB::CipUrpfIfMonTable : public ydk::Entity
{
    public:
        CipUrpfIfMonTable();
        ~CipUrpfIfMonTable();

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

        class CipUrpfIfMonEntry; //type: CISCOIPURPFMIB::CipUrpfIfMonTable::CipUrpfIfMonEntry

        ydk::YList cipurpfifmonentry;
        
}; // CISCOIPURPFMIB::CipUrpfIfMonTable


class CISCOIPURPFMIB::CipUrpfIfMonTable::CipUrpfIfMonEntry : public ydk::Entity
{
    public:
        CipUrpfIfMonEntry();
        ~CipUrpfIfMonEntry();

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
        ydk::YLeaf cipurpfifipversion; //type: CipUrpfIfIpVersion
        ydk::YLeaf cipurpfifdrops; //type: uint32
        ydk::YLeaf cipurpfifsuppresseddrops; //type: uint32
        ydk::YLeaf cipurpfifdroprate; //type: uint32
        ydk::YLeaf cipurpfifdiscontinuitytime; //type: uint32
        ydk::YLeaf cipurpfifdropratenotifyenable; //type: boolean
        ydk::YLeaf cipurpfifnotifydropratethreshold; //type: uint32
        ydk::YLeaf cipurpfifnotifydrholddownreset; //type: boolean
        ydk::YLeaf cipurpfifcheckstrict; //type: CipUrpfIfCheckStrict
        ydk::YLeaf cipurpfifwhichroutetableid; //type: CipUrpfIfWhichRouteTableID
        ydk::YLeaf cipurpfifvrfname; //type: string
        class CipUrpfIfIpVersion;
        class CipUrpfIfCheckStrict;
        class CipUrpfIfWhichRouteTableID;

}; // CISCOIPURPFMIB::CipUrpfIfMonTable::CipUrpfIfMonEntry


class CISCOIPURPFMIB::CipUrpfVrfIfTable : public ydk::Entity
{
    public:
        CipUrpfVrfIfTable();
        ~CipUrpfVrfIfTable();

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

        class CipUrpfVrfIfEntry; //type: CISCOIPURPFMIB::CipUrpfVrfIfTable::CipUrpfVrfIfEntry

        ydk::YList cipurpfvrfifentry;
        
}; // CISCOIPURPFMIB::CipUrpfVrfIfTable


class CISCOIPURPFMIB::CipUrpfVrfIfTable::CipUrpfVrfIfEntry : public ydk::Entity
{
    public:
        CipUrpfVrfIfEntry();
        ~CipUrpfVrfIfEntry();

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

        //type: string (refers to cisco_ios_xe::CISCO_IP_URPF_MIB::CISCOIPURPFMIB::CipUrpfVrfTable::CipUrpfVrfEntry::cipurpfvrfname)
        ydk::YLeaf cipurpfvrfname;
        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cipurpfvrfifdrops; //type: uint32
        ydk::YLeaf cipurpfvrfifdiscontinuitytime; //type: uint32

}; // CISCOIPURPFMIB::CipUrpfVrfIfTable::CipUrpfVrfIfEntry


class CISCOIPURPFMIB::CipUrpfVrfTable : public ydk::Entity
{
    public:
        CipUrpfVrfTable();
        ~CipUrpfVrfTable();

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

        class CipUrpfVrfEntry; //type: CISCOIPURPFMIB::CipUrpfVrfTable::CipUrpfVrfEntry

        ydk::YList cipurpfvrfentry;
        
}; // CISCOIPURPFMIB::CipUrpfVrfTable


class CISCOIPURPFMIB::CipUrpfVrfTable::CipUrpfVrfEntry : public ydk::Entity
{
    public:
        CipUrpfVrfEntry();
        ~CipUrpfVrfEntry();

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

        ydk::YLeaf cipurpfvrfname; //type: string

}; // CISCOIPURPFMIB::CipUrpfVrfTable::CipUrpfVrfEntry

class UnicastRpfType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf strict;
        static const ydk::Enum::YLeaf loose;
        static const ydk::Enum::YLeaf disabled;

};

class CISCOIPURPFMIB::CipUrpfTable::CipUrpfEntry::CipUrpfIpVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class CISCOIPURPFMIB::CipUrpfIfMonTable::CipUrpfIfMonEntry::CipUrpfIfIpVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class CISCOIPURPFMIB::CipUrpfIfMonTable::CipUrpfIfMonEntry::CipUrpfIfCheckStrict : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf strict;
        static const ydk::Enum::YLeaf loose;

};

class CISCOIPURPFMIB::CipUrpfIfMonTable::CipUrpfIfMonEntry::CipUrpfIfWhichRouteTableID : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf vrf;

};


}
}

#endif /* _CISCO_IP_URPF_MIB_ */

