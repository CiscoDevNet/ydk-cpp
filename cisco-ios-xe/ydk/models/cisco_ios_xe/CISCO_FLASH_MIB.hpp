#ifndef _CISCO_FLASH_MIB_
#define _CISCO_FLASH_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_FLASH_MIB {

class CISCOFLASHMIB : public ydk::Entity
{
    public:
        CISCOFLASHMIB();
        ~CISCOFLASHMIB();

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

        class Ciscoflashdevice; //type: CISCOFLASHMIB::Ciscoflashdevice
        class Ciscoflashcfg; //type: CISCOFLASHMIB::Ciscoflashcfg
        class Ciscoflashdevicetable; //type: CISCOFLASHMIB::Ciscoflashdevicetable
        class Ciscoflashchiptable; //type: CISCOFLASHMIB::Ciscoflashchiptable
        class Ciscoflashpartitiontable; //type: CISCOFLASHMIB::Ciscoflashpartitiontable
        class Ciscoflashfiletable; //type: CISCOFLASHMIB::Ciscoflashfiletable
        class Ciscoflashfilebytypetable; //type: CISCOFLASHMIB::Ciscoflashfilebytypetable
        class Ciscoflashcopytable; //type: CISCOFLASHMIB::Ciscoflashcopytable
        class Ciscoflashpartitioningtable; //type: CISCOFLASHMIB::Ciscoflashpartitioningtable
        class Ciscoflashmiscoptable; //type: CISCOFLASHMIB::Ciscoflashmiscoptable

        std::shared_ptr<cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::Ciscoflashdevice> ciscoflashdevice;
        std::shared_ptr<cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::Ciscoflashcfg> ciscoflashcfg;
        std::shared_ptr<cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::Ciscoflashdevicetable> ciscoflashdevicetable;
        std::shared_ptr<cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::Ciscoflashchiptable> ciscoflashchiptable;
        std::shared_ptr<cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::Ciscoflashpartitiontable> ciscoflashpartitiontable;
        std::shared_ptr<cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::Ciscoflashfiletable> ciscoflashfiletable;
        std::shared_ptr<cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::Ciscoflashfilebytypetable> ciscoflashfilebytypetable;
        std::shared_ptr<cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::Ciscoflashcopytable> ciscoflashcopytable;
        std::shared_ptr<cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::Ciscoflashpartitioningtable> ciscoflashpartitioningtable;
        std::shared_ptr<cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::Ciscoflashmiscoptable> ciscoflashmiscoptable;
        
}; // CISCOFLASHMIB


class CISCOFLASHMIB::Ciscoflashdevice : public ydk::Entity
{
    public:
        Ciscoflashdevice();
        ~Ciscoflashdevice();

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

        ydk::YLeaf ciscoflashdevicessupported; //type: uint32

}; // CISCOFLASHMIB::Ciscoflashdevice


class CISCOFLASHMIB::Ciscoflashcfg : public ydk::Entity
{
    public:
        Ciscoflashcfg();
        ~Ciscoflashcfg();

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

        ydk::YLeaf ciscoflashcfgdevinsnotifenable; //type: boolean
        ydk::YLeaf ciscoflashcfgdevremnotifenable; //type: boolean
        ydk::YLeaf ciscoflashpartitionlowspacenotifenable; //type: boolean

}; // CISCOFLASHMIB::Ciscoflashcfg


class CISCOFLASHMIB::Ciscoflashdevicetable : public ydk::Entity
{
    public:
        Ciscoflashdevicetable();
        ~Ciscoflashdevicetable();

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

        class Ciscoflashdeviceentry; //type: CISCOFLASHMIB::Ciscoflashdevicetable::Ciscoflashdeviceentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::Ciscoflashdevicetable::Ciscoflashdeviceentry> > ciscoflashdeviceentry;
        
}; // CISCOFLASHMIB::Ciscoflashdevicetable


class CISCOFLASHMIB::Ciscoflashdevicetable::Ciscoflashdeviceentry : public ydk::Entity
{
    public:
        Ciscoflashdeviceentry();
        ~Ciscoflashdeviceentry();

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

        ydk::YLeaf ciscoflashdeviceindex; //type: uint32
        ydk::YLeaf ciscoflashdevicesize; //type: uint32
        ydk::YLeaf ciscoflashdeviceminpartitionsize; //type: uint32
        ydk::YLeaf ciscoflashdevicemaxpartitions; //type: uint32
        ydk::YLeaf ciscoflashdevicepartitions; //type: uint32
        ydk::YLeaf ciscoflashdevicechipcount; //type: int32
        ydk::YLeaf ciscoflashdevicename; //type: string
        ydk::YLeaf ciscoflashdevicedescr; //type: string
        ydk::YLeaf ciscoflashdevicecontroller; //type: string
        ydk::YLeaf ciscoflashdevicecard; //type: string
        ydk::YLeaf ciscoflashdeviceprogrammingjumper; //type: Ciscoflashdeviceprogrammingjumper
        ydk::YLeaf ciscoflashdeviceinittime; //type: uint32
        ydk::YLeaf ciscoflashdeviceremovable; //type: boolean
        ydk::YLeaf ciscoflashphyentindex; //type: int32
        ydk::YLeaf ciscoflashdevicenameextended; //type: string
        ydk::YLeaf ciscoflashdevicesizeextended; //type: uint64
        ydk::YLeaf ciscoflashdeviceminpartitionsizeextended; //type: uint64
        class Ciscoflashdeviceprogrammingjumper;

}; // CISCOFLASHMIB::Ciscoflashdevicetable::Ciscoflashdeviceentry


class CISCOFLASHMIB::Ciscoflashchiptable : public ydk::Entity
{
    public:
        Ciscoflashchiptable();
        ~Ciscoflashchiptable();

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

        class Ciscoflashchipentry; //type: CISCOFLASHMIB::Ciscoflashchiptable::Ciscoflashchipentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::Ciscoflashchiptable::Ciscoflashchipentry> > ciscoflashchipentry;
        
}; // CISCOFLASHMIB::Ciscoflashchiptable


class CISCOFLASHMIB::Ciscoflashchiptable::Ciscoflashchipentry : public ydk::Entity
{
    public:
        Ciscoflashchipentry();
        ~Ciscoflashchipentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::Ciscoflashdevicetable::Ciscoflashdeviceentry::ciscoflashdeviceindex)
        ydk::YLeaf ciscoflashdeviceindex;
        ydk::YLeaf ciscoflashchipindex; //type: int32
        ydk::YLeaf ciscoflashchipcode; //type: string
        ydk::YLeaf ciscoflashchipdescr; //type: string
        ydk::YLeaf ciscoflashchipwriteretries; //type: uint32
        ydk::YLeaf ciscoflashchiperaseretries; //type: uint32
        ydk::YLeaf ciscoflashchipmaxwriteretries; //type: uint32
        ydk::YLeaf ciscoflashchipmaxeraseretries; //type: uint32

}; // CISCOFLASHMIB::Ciscoflashchiptable::Ciscoflashchipentry


class CISCOFLASHMIB::Ciscoflashpartitiontable : public ydk::Entity
{
    public:
        Ciscoflashpartitiontable();
        ~Ciscoflashpartitiontable();

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

        class Ciscoflashpartitionentry; //type: CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry> > ciscoflashpartitionentry;
        
}; // CISCOFLASHMIB::Ciscoflashpartitiontable


class CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry : public ydk::Entity
{
    public:
        Ciscoflashpartitionentry();
        ~Ciscoflashpartitionentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::Ciscoflashdevicetable::Ciscoflashdeviceentry::ciscoflashdeviceindex)
        ydk::YLeaf ciscoflashdeviceindex;
        ydk::YLeaf ciscoflashpartitionindex; //type: uint32
        ydk::YLeaf ciscoflashpartitionstartchip; //type: int32
        ydk::YLeaf ciscoflashpartitionendchip; //type: int32
        ydk::YLeaf ciscoflashpartitionsize; //type: uint32
        ydk::YLeaf ciscoflashpartitionfreespace; //type: uint32
        ydk::YLeaf ciscoflashpartitionfilecount; //type: uint32
        ydk::YLeaf ciscoflashpartitionchecksumalgorithm; //type: Ciscoflashpartitionchecksumalgorithm
        ydk::YLeaf ciscoflashpartitionstatus; //type: Ciscoflashpartitionstatus
        ydk::YLeaf ciscoflashpartitionupgrademethod; //type: Ciscoflashpartitionupgrademethod
        ydk::YLeaf ciscoflashpartitionname; //type: string
        ydk::YLeaf ciscoflashpartitionneederasure; //type: boolean
        ydk::YLeaf ciscoflashpartitionfilenamelength; //type: int32
        ydk::YLeaf ciscoflashpartitionsizeextended; //type: uint64
        ydk::YLeaf ciscoflashpartitionfreespaceextended; //type: uint64
        ydk::YLeaf ciscoflashpartitionlowspacenotifthreshold; //type: int32
        class Ciscoflashpartitionchecksumalgorithm;
        class Ciscoflashpartitionstatus;
        class Ciscoflashpartitionupgrademethod;

}; // CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry


class CISCOFLASHMIB::Ciscoflashfiletable : public ydk::Entity
{
    public:
        Ciscoflashfiletable();
        ~Ciscoflashfiletable();

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

        class Ciscoflashfileentry; //type: CISCOFLASHMIB::Ciscoflashfiletable::Ciscoflashfileentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::Ciscoflashfiletable::Ciscoflashfileentry> > ciscoflashfileentry;
        
}; // CISCOFLASHMIB::Ciscoflashfiletable


class CISCOFLASHMIB::Ciscoflashfiletable::Ciscoflashfileentry : public ydk::Entity
{
    public:
        Ciscoflashfileentry();
        ~Ciscoflashfileentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::Ciscoflashdevicetable::Ciscoflashdeviceentry::ciscoflashdeviceindex)
        ydk::YLeaf ciscoflashdeviceindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry::ciscoflashpartitionindex)
        ydk::YLeaf ciscoflashpartitionindex;
        ydk::YLeaf ciscoflashfileindex; //type: uint32
        ydk::YLeaf ciscoflashfilesize; //type: uint32
        ydk::YLeaf ciscoflashfilechecksum; //type: binary
        ydk::YLeaf ciscoflashfilestatus; //type: Ciscoflashfilestatus
        ydk::YLeaf ciscoflashfilename; //type: string
        ydk::YLeaf ciscoflashfiletype; //type: FlashFileType
        ydk::YLeaf ciscoflashfiledate; //type: string
        class Ciscoflashfilestatus;

}; // CISCOFLASHMIB::Ciscoflashfiletable::Ciscoflashfileentry


class CISCOFLASHMIB::Ciscoflashfilebytypetable : public ydk::Entity
{
    public:
        Ciscoflashfilebytypetable();
        ~Ciscoflashfilebytypetable();

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

        class Ciscoflashfilebytypeentry; //type: CISCOFLASHMIB::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry> > ciscoflashfilebytypeentry;
        
}; // CISCOFLASHMIB::Ciscoflashfilebytypetable


class CISCOFLASHMIB::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry : public ydk::Entity
{
    public:
        Ciscoflashfilebytypeentry();
        ~Ciscoflashfilebytypeentry();

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

        ydk::YLeaf ciscoflashfiletype; //type: FlashFileType
        //type: uint32 (refers to cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::Ciscoflashdevicetable::Ciscoflashdeviceentry::ciscoflashdeviceindex)
        ydk::YLeaf ciscoflashdeviceindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry::ciscoflashpartitionindex)
        ydk::YLeaf ciscoflashpartitionindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::Ciscoflashfiletable::Ciscoflashfileentry::ciscoflashfileindex)
        ydk::YLeaf ciscoflashfileindex;
        ydk::YLeaf ciscoflashfilebytypesize; //type: uint32
        ydk::YLeaf ciscoflashfilebytypechecksum; //type: binary
        ydk::YLeaf ciscoflashfilebytypestatus; //type: Ciscoflashfilebytypestatus
        ydk::YLeaf ciscoflashfilebytypename; //type: string
        ydk::YLeaf ciscoflashfilebytypedate; //type: string
        class Ciscoflashfilebytypestatus;

}; // CISCOFLASHMIB::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry


class CISCOFLASHMIB::Ciscoflashcopytable : public ydk::Entity
{
    public:
        Ciscoflashcopytable();
        ~Ciscoflashcopytable();

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

        class Ciscoflashcopyentry; //type: CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry> > ciscoflashcopyentry;
        
}; // CISCOFLASHMIB::Ciscoflashcopytable


class CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry : public ydk::Entity
{
    public:
        Ciscoflashcopyentry();
        ~Ciscoflashcopyentry();

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

        ydk::YLeaf ciscoflashcopyserialnumber; //type: int32
        ydk::YLeaf ciscoflashcopycommand; //type: Ciscoflashcopycommand
        ydk::YLeaf ciscoflashcopyprotocol; //type: Ciscoflashcopyprotocol
        ydk::YLeaf ciscoflashcopyserveraddress; //type: string
        ydk::YLeaf ciscoflashcopysourcename; //type: string
        ydk::YLeaf ciscoflashcopydestinationname; //type: string
        ydk::YLeaf ciscoflashcopyremoteusername; //type: string
        ydk::YLeaf ciscoflashcopystatus; //type: Ciscoflashcopystatus
        ydk::YLeaf ciscoflashcopynotifyoncompletion; //type: boolean
        ydk::YLeaf ciscoflashcopytime; //type: uint32
        ydk::YLeaf ciscoflashcopyentrystatus; //type: RowStatus
        ydk::YLeaf ciscoflashcopyverify; //type: boolean
        ydk::YLeaf ciscoflashcopyserveraddrtype; //type: InetAddressType
        ydk::YLeaf ciscoflashcopyserveraddrrev1; //type: binary
        ydk::YLeaf ciscoflashcopyremotepassword; //type: string
        class Ciscoflashcopycommand;
        class Ciscoflashcopyprotocol;
        class Ciscoflashcopystatus;

}; // CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry


class CISCOFLASHMIB::Ciscoflashpartitioningtable : public ydk::Entity
{
    public:
        Ciscoflashpartitioningtable();
        ~Ciscoflashpartitioningtable();

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

        class Ciscoflashpartitioningentry; //type: CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry> > ciscoflashpartitioningentry;
        
}; // CISCOFLASHMIB::Ciscoflashpartitioningtable


class CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry : public ydk::Entity
{
    public:
        Ciscoflashpartitioningentry();
        ~Ciscoflashpartitioningentry();

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

        ydk::YLeaf ciscoflashpartitioningserialnumber; //type: int32
        ydk::YLeaf ciscoflashpartitioningcommand; //type: Ciscoflashpartitioningcommand
        ydk::YLeaf ciscoflashpartitioningdestinationname; //type: string
        ydk::YLeaf ciscoflashpartitioningpartitioncount; //type: uint32
        ydk::YLeaf ciscoflashpartitioningpartitionsizes; //type: string
        ydk::YLeaf ciscoflashpartitioningstatus; //type: Ciscoflashpartitioningstatus
        ydk::YLeaf ciscoflashpartitioningnotifyoncompletion; //type: boolean
        ydk::YLeaf ciscoflashpartitioningtime; //type: uint32
        ydk::YLeaf ciscoflashpartitioningentrystatus; //type: RowStatus
        class Ciscoflashpartitioningcommand;
        class Ciscoflashpartitioningstatus;

}; // CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry


class CISCOFLASHMIB::Ciscoflashmiscoptable : public ydk::Entity
{
    public:
        Ciscoflashmiscoptable();
        ~Ciscoflashmiscoptable();

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

        class Ciscoflashmiscopentry; //type: CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_FLASH_MIB::CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry> > ciscoflashmiscopentry;
        
}; // CISCOFLASHMIB::Ciscoflashmiscoptable


class CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry : public ydk::Entity
{
    public:
        Ciscoflashmiscopentry();
        ~Ciscoflashmiscopentry();

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

        ydk::YLeaf ciscoflashmiscopserialnumber; //type: int32
        ydk::YLeaf ciscoflashmiscopcommand; //type: Ciscoflashmiscopcommand
        ydk::YLeaf ciscoflashmiscopdestinationname; //type: string
        ydk::YLeaf ciscoflashmiscopstatus; //type: Ciscoflashmiscopstatus
        ydk::YLeaf ciscoflashmiscopnotifyoncompletion; //type: boolean
        ydk::YLeaf ciscoflashmiscoptime; //type: uint32
        ydk::YLeaf ciscoflashmiscopentrystatus; //type: RowStatus
        class Ciscoflashmiscopcommand;
        class Ciscoflashmiscopstatus;

}; // CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry

class FlashFileType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf config;
        static const ydk::Enum::YLeaf image;
        static const ydk::Enum::YLeaf directory;
        static const ydk::Enum::YLeaf crashinfo;

};

class CISCOFLASHMIB::Ciscoflashdevicetable::Ciscoflashdeviceentry::Ciscoflashdeviceprogrammingjumper : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf installed;
        static const ydk::Enum::YLeaf notInstalled;
        static const ydk::Enum::YLeaf unknown;

};

class CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry::Ciscoflashpartitionchecksumalgorithm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf simpleChecksum;
        static const ydk::Enum::YLeaf undefined;
        static const ydk::Enum::YLeaf simpleCRC;

};

class CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry::Ciscoflashpartitionstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf readOnly;
        static const ydk::Enum::YLeaf runFromFlash;
        static const ydk::Enum::YLeaf readWrite;

};

class CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry::Ciscoflashpartitionupgrademethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf rxbootFLH;
        static const ydk::Enum::YLeaf direct;

};

class CISCOFLASHMIB::Ciscoflashfiletable::Ciscoflashfileentry::Ciscoflashfilestatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deleted;
        static const ydk::Enum::YLeaf invalidChecksum;
        static const ydk::Enum::YLeaf valid;

};

class CISCOFLASHMIB::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry::Ciscoflashfilebytypestatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deleted;
        static const ydk::Enum::YLeaf invalidChecksum;
        static const ydk::Enum::YLeaf valid;

};

class CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopycommand : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf copyToFlashWithErase;
        static const ydk::Enum::YLeaf copyToFlashWithoutErase;
        static const ydk::Enum::YLeaf copyFromFlash;
        static const ydk::Enum::YLeaf copyFromFlhLog;

};

class CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopyprotocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tftp;
        static const ydk::Enum::YLeaf rcp;
        static const ydk::Enum::YLeaf lex;
        static const ydk::Enum::YLeaf ftp;
        static const ydk::Enum::YLeaf scp;
        static const ydk::Enum::YLeaf sftp;

};

class CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopystatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf copyOperationPending;
        static const ydk::Enum::YLeaf copyInProgress;
        static const ydk::Enum::YLeaf copyOperationSuccess;
        static const ydk::Enum::YLeaf copyInvalidOperation;
        static const ydk::Enum::YLeaf copyInvalidProtocol;
        static const ydk::Enum::YLeaf copyInvalidSourceName;
        static const ydk::Enum::YLeaf copyInvalidDestName;
        static const ydk::Enum::YLeaf copyInvalidServerAddress;
        static const ydk::Enum::YLeaf copyDeviceBusy;
        static const ydk::Enum::YLeaf copyDeviceOpenError;
        static const ydk::Enum::YLeaf copyDeviceError;
        static const ydk::Enum::YLeaf copyDeviceNotProgrammable;
        static const ydk::Enum::YLeaf copyDeviceFull;
        static const ydk::Enum::YLeaf copyFileOpenError;
        static const ydk::Enum::YLeaf copyFileTransferError;
        static const ydk::Enum::YLeaf copyFileChecksumError;
        static const ydk::Enum::YLeaf copyNoMemory;
        static const ydk::Enum::YLeaf copyUnknownFailure;
        static const ydk::Enum::YLeaf copyInvalidSignature;
        static const ydk::Enum::YLeaf copyProhibited;

};

class CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::Ciscoflashpartitioningcommand : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf partition;

};

class CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::Ciscoflashpartitioningstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf partitioningInProgress;
        static const ydk::Enum::YLeaf partitioningOperationSuccess;
        static const ydk::Enum::YLeaf partitioningInvalidOperation;
        static const ydk::Enum::YLeaf partitioningInvalidDestName;
        static const ydk::Enum::YLeaf partitioningInvalidPartitionCount;
        static const ydk::Enum::YLeaf partitioningInvalidPartitionSizes;
        static const ydk::Enum::YLeaf partitioningDeviceBusy;
        static const ydk::Enum::YLeaf partitioningDeviceOpenError;
        static const ydk::Enum::YLeaf partitioningDeviceError;
        static const ydk::Enum::YLeaf partitioningNoMemory;
        static const ydk::Enum::YLeaf partitioningUnknownFailure;

};

class CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::Ciscoflashmiscopcommand : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf erase;
        static const ydk::Enum::YLeaf verify;
        static const ydk::Enum::YLeaf delete_;
        static const ydk::Enum::YLeaf undelete;
        static const ydk::Enum::YLeaf squeeze;
        static const ydk::Enum::YLeaf format;

};

class CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::Ciscoflashmiscopstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf miscOpInProgress;
        static const ydk::Enum::YLeaf miscOpOperationSuccess;
        static const ydk::Enum::YLeaf miscOpInvalidOperation;
        static const ydk::Enum::YLeaf miscOpInvalidDestName;
        static const ydk::Enum::YLeaf miscOpDeviceBusy;
        static const ydk::Enum::YLeaf miscOpDeviceOpenError;
        static const ydk::Enum::YLeaf miscOpDeviceError;
        static const ydk::Enum::YLeaf miscOpDeviceNotProgrammable;
        static const ydk::Enum::YLeaf miscOpFileOpenError;
        static const ydk::Enum::YLeaf miscOpFileDeleteFailure;
        static const ydk::Enum::YLeaf miscOpFileUndeleteFailure;
        static const ydk::Enum::YLeaf miscOpFileChecksumError;
        static const ydk::Enum::YLeaf miscOpNoMemory;
        static const ydk::Enum::YLeaf miscOpUnknownFailure;
        static const ydk::Enum::YLeaf miscOpSqueezeFailure;
        static const ydk::Enum::YLeaf miscOpNoSuchFile;
        static const ydk::Enum::YLeaf miscOpFormatFailure;

};


}
}

#endif /* _CISCO_FLASH_MIB_ */

