#ifndef _CISCO_IPSLA_ECHO_MIB_
#define _CISCO_IPSLA_ECHO_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IPSLA_ECHO_MIB {

class CISCOIPSLAECHOMIB : public ydk::Entity
{
    public:
        CISCOIPSLAECHOMIB();
        ~CISCOIPSLAECHOMIB();

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

        class CipslaIcmpEchoTmplTable; //type: CISCOIPSLAECHOMIB::CipslaIcmpEchoTmplTable
        class CipslaUdpEchoTmplTable; //type: CISCOIPSLAECHOMIB::CipslaUdpEchoTmplTable
        class CipslaTcpConnTmplTable; //type: CISCOIPSLAECHOMIB::CipslaTcpConnTmplTable

        std::shared_ptr<cisco_ios_xe::CISCO_IPSLA_ECHO_MIB::CISCOIPSLAECHOMIB::CipslaIcmpEchoTmplTable> cipslaicmpechotmpltable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSLA_ECHO_MIB::CISCOIPSLAECHOMIB::CipslaUdpEchoTmplTable> cipslaudpechotmpltable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSLA_ECHO_MIB::CISCOIPSLAECHOMIB::CipslaTcpConnTmplTable> cipslatcpconntmpltable;
        
}; // CISCOIPSLAECHOMIB


class CISCOIPSLAECHOMIB::CipslaIcmpEchoTmplTable : public ydk::Entity
{
    public:
        CipslaIcmpEchoTmplTable();
        ~CipslaIcmpEchoTmplTable();

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

        class CipslaIcmpEchoTmplEntry; //type: CISCOIPSLAECHOMIB::CipslaIcmpEchoTmplTable::CipslaIcmpEchoTmplEntry

        ydk::YList cipslaicmpechotmplentry;
        
}; // CISCOIPSLAECHOMIB::CipslaIcmpEchoTmplTable


class CISCOIPSLAECHOMIB::CipslaIcmpEchoTmplTable::CipslaIcmpEchoTmplEntry : public ydk::Entity
{
    public:
        CipslaIcmpEchoTmplEntry();
        ~CipslaIcmpEchoTmplEntry();

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

        ydk::YLeaf cipslaicmpechotmplname; //type: string
        ydk::YLeaf cipslaicmpechotmpldescription; //type: string
        ydk::YLeaf cipslaicmpechotmplsrcaddrtype; //type: InetAddressType
        ydk::YLeaf cipslaicmpechotmplsrcaddr; //type: binary
        ydk::YLeaf cipslaicmpechotmpltimeout; //type: uint32
        ydk::YLeaf cipslaicmpechotmplverifydata; //type: boolean
        ydk::YLeaf cipslaicmpechotmplreqdatasize; //type: uint32
        ydk::YLeaf cipslaicmpechotmpltos; //type: uint32
        ydk::YLeaf cipslaicmpechotmplvrfname; //type: string
        ydk::YLeaf cipslaicmpechotmplthreshold; //type: uint32
        ydk::YLeaf cipslaicmpechotmplhistlives; //type: uint32
        ydk::YLeaf cipslaicmpechotmplhistbuckets; //type: uint32
        ydk::YLeaf cipslaicmpechotmplhistfilter; //type: CipslaIcmpEchoTmplHistFilter
        ydk::YLeaf cipslaicmpechotmplstatshours; //type: uint32
        ydk::YLeaf cipslaicmpechotmpldistbuckets; //type: uint32
        ydk::YLeaf cipslaicmpechotmpldistinterval; //type: uint32
        ydk::YLeaf cipslaicmpechotmplstoragetype; //type: StorageType
        ydk::YLeaf cipslaicmpechotmplrowstatus; //type: RowStatus
        class CipslaIcmpEchoTmplHistFilter;

}; // CISCOIPSLAECHOMIB::CipslaIcmpEchoTmplTable::CipslaIcmpEchoTmplEntry


class CISCOIPSLAECHOMIB::CipslaUdpEchoTmplTable : public ydk::Entity
{
    public:
        CipslaUdpEchoTmplTable();
        ~CipslaUdpEchoTmplTable();

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

        class CipslaUdpEchoTmplEntry; //type: CISCOIPSLAECHOMIB::CipslaUdpEchoTmplTable::CipslaUdpEchoTmplEntry

        ydk::YList cipslaudpechotmplentry;
        
}; // CISCOIPSLAECHOMIB::CipslaUdpEchoTmplTable


class CISCOIPSLAECHOMIB::CipslaUdpEchoTmplTable::CipslaUdpEchoTmplEntry : public ydk::Entity
{
    public:
        CipslaUdpEchoTmplEntry();
        ~CipslaUdpEchoTmplEntry();

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

        ydk::YLeaf cipslaudpechotmplname; //type: string
        ydk::YLeaf cipslaudpechotmpldescription; //type: string
        ydk::YLeaf cipslaudpechotmplcontrolenable; //type: boolean
        ydk::YLeaf cipslaudpechotmplsrcaddrtype; //type: InetAddressType
        ydk::YLeaf cipslaudpechotmplsrcaddr; //type: binary
        ydk::YLeaf cipslaudpechotmplsrcport; //type: uint16
        ydk::YLeaf cipslaudpechotmpltimeout; //type: uint32
        ydk::YLeaf cipslaudpechotmplverifydata; //type: boolean
        ydk::YLeaf cipslaudpechotmplreqdatasize; //type: uint32
        ydk::YLeaf cipslaudpechotmpltos; //type: uint32
        ydk::YLeaf cipslaudpechotmplvrfname; //type: string
        ydk::YLeaf cipslaudpechotmplthreshold; //type: uint32
        ydk::YLeaf cipslaudpechotmplhistlives; //type: uint32
        ydk::YLeaf cipslaudpechotmplhistbuckets; //type: uint32
        ydk::YLeaf cipslaudpechotmplhistfilter; //type: CipslaUdpEchoTmplHistFilter
        ydk::YLeaf cipslaudpechotmplstatshours; //type: uint32
        ydk::YLeaf cipslaudpechotmpldistbuckets; //type: uint32
        ydk::YLeaf cipslaudpechotmpldistinterval; //type: uint32
        ydk::YLeaf cipslaudpechotmplstoragetype; //type: StorageType
        ydk::YLeaf cipslaudpechotmplrowstatus; //type: RowStatus
        class CipslaUdpEchoTmplHistFilter;

}; // CISCOIPSLAECHOMIB::CipslaUdpEchoTmplTable::CipslaUdpEchoTmplEntry


class CISCOIPSLAECHOMIB::CipslaTcpConnTmplTable : public ydk::Entity
{
    public:
        CipslaTcpConnTmplTable();
        ~CipslaTcpConnTmplTable();

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

        class CipslaTcpConnTmplEntry; //type: CISCOIPSLAECHOMIB::CipslaTcpConnTmplTable::CipslaTcpConnTmplEntry

        ydk::YList cipslatcpconntmplentry;
        
}; // CISCOIPSLAECHOMIB::CipslaTcpConnTmplTable


class CISCOIPSLAECHOMIB::CipslaTcpConnTmplTable::CipslaTcpConnTmplEntry : public ydk::Entity
{
    public:
        CipslaTcpConnTmplEntry();
        ~CipslaTcpConnTmplEntry();

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

        ydk::YLeaf cipslatcpconntmplname; //type: string
        ydk::YLeaf cipslatcpconntmpldescription; //type: string
        ydk::YLeaf cipslatcpconntmplcontrolenable; //type: boolean
        ydk::YLeaf cipslatcpconntmplsrcaddrtype; //type: InetAddressType
        ydk::YLeaf cipslatcpconntmplsrcaddr; //type: binary
        ydk::YLeaf cipslatcpconntmplsrcport; //type: uint16
        ydk::YLeaf cipslatcpconntmpltimeout; //type: uint32
        ydk::YLeaf cipslatcpconntmplverifydata; //type: boolean
        ydk::YLeaf cipslatcpconntmpltos; //type: uint32
        ydk::YLeaf cipslatcpconntmplthreshold; //type: uint32
        ydk::YLeaf cipslatcpconntmplhistlives; //type: uint32
        ydk::YLeaf cipslatcpconntmplhistbuckets; //type: uint32
        ydk::YLeaf cipslatcpconntmplhistfilter; //type: CipslaTcpConnTmplHistFilter
        ydk::YLeaf cipslatcpconntmplstatshours; //type: uint32
        ydk::YLeaf cipslatcpconntmpldistbuckets; //type: uint32
        ydk::YLeaf cipslatcpconntmpldistinterval; //type: uint32
        ydk::YLeaf cipslatcpconntmplstoragetype; //type: StorageType
        ydk::YLeaf cipslatcpconntmplrowstatus; //type: RowStatus
        class CipslaTcpConnTmplHistFilter;

}; // CISCOIPSLAECHOMIB::CipslaTcpConnTmplTable::CipslaTcpConnTmplEntry

class CISCOIPSLAECHOMIB::CipslaIcmpEchoTmplTable::CipslaIcmpEchoTmplEntry::CipslaIcmpEchoTmplHistFilter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf overThreshold;
        static const ydk::Enum::YLeaf failures;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "all") return 2;
            if (name == "overThreshold") return 3;
            if (name == "failures") return 4;
            return -1;
        }
};

class CISCOIPSLAECHOMIB::CipslaUdpEchoTmplTable::CipslaUdpEchoTmplEntry::CipslaUdpEchoTmplHistFilter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf overThreshold;
        static const ydk::Enum::YLeaf failures;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "all") return 2;
            if (name == "overThreshold") return 3;
            if (name == "failures") return 4;
            return -1;
        }
};

class CISCOIPSLAECHOMIB::CipslaTcpConnTmplTable::CipslaTcpConnTmplEntry::CipslaTcpConnTmplHistFilter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf overThreshold;
        static const ydk::Enum::YLeaf failures;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "all") return 2;
            if (name == "overThreshold") return 3;
            if (name == "failures") return 4;
            return -1;
        }
};


}
}

#endif /* _CISCO_IPSLA_ECHO_MIB_ */

