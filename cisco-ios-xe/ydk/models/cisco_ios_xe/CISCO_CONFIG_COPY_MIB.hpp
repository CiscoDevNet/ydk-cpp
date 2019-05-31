#ifndef _CISCO_CONFIG_COPY_MIB_
#define _CISCO_CONFIG_COPY_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_CONFIG_COPY_MIB {

class CISCOCONFIGCOPYMIB : public ydk::Entity
{
    public:
        CISCOCONFIGCOPYMIB();
        ~CISCOCONFIGCOPYMIB();

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

        class CcCopyTable; //type: CISCOCONFIGCOPYMIB::CcCopyTable
        class CcCopyErrorTable; //type: CISCOCONFIGCOPYMIB::CcCopyErrorTable

        std::shared_ptr<cisco_ios_xe::CISCO_CONFIG_COPY_MIB::CISCOCONFIGCOPYMIB::CcCopyTable> cccopytable;
        std::shared_ptr<cisco_ios_xe::CISCO_CONFIG_COPY_MIB::CISCOCONFIGCOPYMIB::CcCopyErrorTable> cccopyerrortable;
        
}; // CISCOCONFIGCOPYMIB


class CISCOCONFIGCOPYMIB::CcCopyTable : public ydk::Entity
{
    public:
        CcCopyTable();
        ~CcCopyTable();

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

        class CcCopyEntry; //type: CISCOCONFIGCOPYMIB::CcCopyTable::CcCopyEntry

        ydk::YList cccopyentry;
        
}; // CISCOCONFIGCOPYMIB::CcCopyTable


class CISCOCONFIGCOPYMIB::CcCopyTable::CcCopyEntry : public ydk::Entity
{
    public:
        CcCopyEntry();
        ~CcCopyEntry();

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

        ydk::YLeaf cccopyindex; //type: uint32
        ydk::YLeaf cccopyprotocol; //type: ConfigCopyProtocol
        ydk::YLeaf cccopysourcefiletype; //type: ConfigFileType
        ydk::YLeaf cccopydestfiletype; //type: ConfigFileType
        ydk::YLeaf cccopyserveraddress; //type: string
        ydk::YLeaf cccopyfilename; //type: string
        ydk::YLeaf cccopyusername; //type: string
        ydk::YLeaf cccopyuserpassword; //type: string
        ydk::YLeaf cccopynotificationoncompletion; //type: boolean
        ydk::YLeaf cccopystate; //type: ConfigCopyState
        ydk::YLeaf cccopytimestarted; //type: uint32
        ydk::YLeaf cccopytimecompleted; //type: uint32
        ydk::YLeaf cccopyfailcause; //type: ConfigCopyFailCause
        ydk::YLeaf cccopyentryrowstatus; //type: RowStatus
        ydk::YLeaf cccopyserveraddresstype; //type: InetAddressType
        ydk::YLeaf cccopyserveraddressrev1; //type: binary

}; // CISCOCONFIGCOPYMIB::CcCopyTable::CcCopyEntry


class CISCOCONFIGCOPYMIB::CcCopyErrorTable : public ydk::Entity
{
    public:
        CcCopyErrorTable();
        ~CcCopyErrorTable();

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

        class CcCopyErrorEntry; //type: CISCOCONFIGCOPYMIB::CcCopyErrorTable::CcCopyErrorEntry

        ydk::YList cccopyerrorentry;
        
}; // CISCOCONFIGCOPYMIB::CcCopyErrorTable


class CISCOCONFIGCOPYMIB::CcCopyErrorTable::CcCopyErrorEntry : public ydk::Entity
{
    public:
        CcCopyErrorEntry();
        ~CcCopyErrorEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_CONFIG_COPY_MIB::CISCOCONFIGCOPYMIB::CcCopyTable::CcCopyEntry::cccopyindex)
        ydk::YLeaf cccopyindex;
        ydk::YLeaf cccopyerrorindex; //type: uint32
        ydk::YLeaf cccopyerrordeviceipaddresstype; //type: InetAddressType
        ydk::YLeaf cccopyerrordeviceipaddress; //type: binary
        ydk::YLeaf cccopyerrordevicewwn; //type: binary
        ydk::YLeaf cccopyerrordescription; //type: string

}; // CISCOCONFIGCOPYMIB::CcCopyErrorTable::CcCopyErrorEntry

class ConfigCopyProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tftp;
        static const ydk::Enum::YLeaf ftp;
        static const ydk::Enum::YLeaf rcp;
        static const ydk::Enum::YLeaf scp;
        static const ydk::Enum::YLeaf sftp;

};

class ConfigCopyState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf waiting;
        static const ydk::Enum::YLeaf running;
        static const ydk::Enum::YLeaf successful;
        static const ydk::Enum::YLeaf failed;

};

class ConfigCopyFailCause : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf badFileName;
        static const ydk::Enum::YLeaf timeout;
        static const ydk::Enum::YLeaf noMem;
        static const ydk::Enum::YLeaf noConfig;
        static const ydk::Enum::YLeaf unsupportedProtocol;
        static const ydk::Enum::YLeaf someConfigApplyFailed;
        static const ydk::Enum::YLeaf systemNotReady;
        static const ydk::Enum::YLeaf requestAborted;

};

class ConfigFileType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf networkFile;
        static const ydk::Enum::YLeaf iosFile;
        static const ydk::Enum::YLeaf startupConfig;
        static const ydk::Enum::YLeaf runningConfig;
        static const ydk::Enum::YLeaf terminal;
        static const ydk::Enum::YLeaf fabricStartupConfig;

};


}
}

#endif /* _CISCO_CONFIG_COPY_MIB_ */

