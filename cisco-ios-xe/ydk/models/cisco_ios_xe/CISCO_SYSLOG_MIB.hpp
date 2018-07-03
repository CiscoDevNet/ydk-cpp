#ifndef _CISCO_SYSLOG_MIB_
#define _CISCO_SYSLOG_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_SYSLOG_MIB {

class CISCOSYSLOGMIB : public ydk::Entity
{
    public:
        CISCOSYSLOGMIB();
        ~CISCOSYSLOGMIB();

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

        class ClogBasic; //type: CISCOSYSLOGMIB::ClogBasic
        class ClogHistory; //type: CISCOSYSLOGMIB::ClogHistory
        class ClogServer; //type: CISCOSYSLOGMIB::ClogServer
        class ClogHistoryTable; //type: CISCOSYSLOGMIB::ClogHistoryTable
        class ClogServerConfigTable; //type: CISCOSYSLOGMIB::ClogServerConfigTable

        std::shared_ptr<cisco_ios_xe::CISCO_SYSLOG_MIB::CISCOSYSLOGMIB::ClogBasic> clogbasic;
        std::shared_ptr<cisco_ios_xe::CISCO_SYSLOG_MIB::CISCOSYSLOGMIB::ClogHistory> cloghistory;
        std::shared_ptr<cisco_ios_xe::CISCO_SYSLOG_MIB::CISCOSYSLOGMIB::ClogServer> clogserver;
        std::shared_ptr<cisco_ios_xe::CISCO_SYSLOG_MIB::CISCOSYSLOGMIB::ClogHistoryTable> cloghistorytable;
        std::shared_ptr<cisco_ios_xe::CISCO_SYSLOG_MIB::CISCOSYSLOGMIB::ClogServerConfigTable> clogserverconfigtable;
        
}; // CISCOSYSLOGMIB


class CISCOSYSLOGMIB::ClogBasic : public ydk::Entity
{
    public:
        ClogBasic();
        ~ClogBasic();

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

        ydk::YLeaf clognotificationssent; //type: uint32
        ydk::YLeaf clognotificationsenabled; //type: boolean
        ydk::YLeaf clogmaxseverity; //type: SyslogSeverity
        ydk::YLeaf clogmsgignores; //type: uint32
        ydk::YLeaf clogmsgdrops; //type: uint32
        ydk::YLeaf clogoriginidtype; //type: ClogOriginIDType
        ydk::YLeaf clogoriginid; //type: string
        class ClogOriginIDType;

}; // CISCOSYSLOGMIB::ClogBasic


class CISCOSYSLOGMIB::ClogHistory : public ydk::Entity
{
    public:
        ClogHistory();
        ~ClogHistory();

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

        ydk::YLeaf cloghisttablemaxlength; //type: int32
        ydk::YLeaf cloghistmsgsflushed; //type: uint32

}; // CISCOSYSLOGMIB::ClogHistory


class CISCOSYSLOGMIB::ClogServer : public ydk::Entity
{
    public:
        ClogServer();
        ~ClogServer();

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

        ydk::YLeaf clogmaxservers; //type: uint32

}; // CISCOSYSLOGMIB::ClogServer


class CISCOSYSLOGMIB::ClogHistoryTable : public ydk::Entity
{
    public:
        ClogHistoryTable();
        ~ClogHistoryTable();

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

        class ClogHistoryEntry; //type: CISCOSYSLOGMIB::ClogHistoryTable::ClogHistoryEntry

        ydk::YList cloghistoryentry;
        
}; // CISCOSYSLOGMIB::ClogHistoryTable


class CISCOSYSLOGMIB::ClogHistoryTable::ClogHistoryEntry : public ydk::Entity
{
    public:
        ClogHistoryEntry();
        ~ClogHistoryEntry();

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

        ydk::YLeaf cloghistindex; //type: int32
        ydk::YLeaf cloghistfacility; //type: string
        ydk::YLeaf cloghistseverity; //type: SyslogSeverity
        ydk::YLeaf cloghistmsgname; //type: string
        ydk::YLeaf cloghistmsgtext; //type: string
        ydk::YLeaf cloghisttimestamp; //type: uint32

}; // CISCOSYSLOGMIB::ClogHistoryTable::ClogHistoryEntry


class CISCOSYSLOGMIB::ClogServerConfigTable : public ydk::Entity
{
    public:
        ClogServerConfigTable();
        ~ClogServerConfigTable();

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

        class ClogServerConfigEntry; //type: CISCOSYSLOGMIB::ClogServerConfigTable::ClogServerConfigEntry

        ydk::YList clogserverconfigentry;
        
}; // CISCOSYSLOGMIB::ClogServerConfigTable


class CISCOSYSLOGMIB::ClogServerConfigTable::ClogServerConfigEntry : public ydk::Entity
{
    public:
        ClogServerConfigEntry();
        ~ClogServerConfigEntry();

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

        ydk::YLeaf clogserveraddrtype; //type: InetAddressType
        ydk::YLeaf clogserveraddr; //type: binary
        ydk::YLeaf clogserverstatus; //type: RowStatus

}; // CISCOSYSLOGMIB::ClogServerConfigTable::ClogServerConfigEntry

class SyslogSeverity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf emergency;
        static const ydk::Enum::YLeaf alert;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf notice;
        static const ydk::Enum::YLeaf info;
        static const ydk::Enum::YLeaf debug;

};

class CISCOSYSLOGMIB::ClogBasic::ClogOriginIDType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf hostName;
        static const ydk::Enum::YLeaf ipv4Address;
        static const ydk::Enum::YLeaf contextName;
        static const ydk::Enum::YLeaf userDefined;

};


}
}

#endif /* _CISCO_SYSLOG_MIB_ */

