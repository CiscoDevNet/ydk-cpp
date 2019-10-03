#ifndef _OLD_CISCO_INTERFACES_MIB_
#define _OLD_CISCO_INTERFACES_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace OLD_CISCO_INTERFACES_MIB {

class OLDCISCOINTERFACESMIB : public ydk::Entity
{
    public:
        OLDCISCOINTERFACESMIB();
        ~OLDCISCOINTERFACESMIB();

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

        class LifTable; //type: OLDCISCOINTERFACESMIB::LifTable
        class LFSIPTable; //type: OLDCISCOINTERFACESMIB::LFSIPTable

        std::shared_ptr<cisco_ios_xe::OLD_CISCO_INTERFACES_MIB::OLDCISCOINTERFACESMIB::LifTable> liftable;
        std::shared_ptr<cisco_ios_xe::OLD_CISCO_INTERFACES_MIB::OLDCISCOINTERFACESMIB::LFSIPTable> lfsiptable;
        
}; // OLDCISCOINTERFACESMIB


class OLDCISCOINTERFACESMIB::LifTable : public ydk::Entity
{
    public:
        LifTable();
        ~LifTable();

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

        class LifEntry; //type: OLDCISCOINTERFACESMIB::LifTable::LifEntry

        ydk::YList lifentry;
        
}; // OLDCISCOINTERFACESMIB::LifTable


class OLDCISCOINTERFACESMIB::LifTable::LifEntry : public ydk::Entity
{
    public:
        LifEntry();
        ~LifEntry();

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

        //type: int32 (refers to cisco_ios_xe::RFC1213_MIB::RFC1213MIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf locifhardtype; //type: binary
        ydk::YLeaf lociflineprot; //type: int32
        ydk::YLeaf lociflastin; //type: int32
        ydk::YLeaf lociflastout; //type: int32
        ydk::YLeaf lociflastouthang; //type: int32
        ydk::YLeaf locifinbitssec; //type: int32
        ydk::YLeaf locifinpktssec; //type: int32
        ydk::YLeaf locifoutbitssec; //type: int32
        ydk::YLeaf locifoutpktssec; //type: int32
        ydk::YLeaf locifinrunts; //type: int32
        ydk::YLeaf locifingiants; //type: int32
        ydk::YLeaf locifincrc; //type: int32
        ydk::YLeaf locifinframe; //type: int32
        ydk::YLeaf locifinoverrun; //type: int32
        ydk::YLeaf locifinignored; //type: int32
        ydk::YLeaf locifinabort; //type: int32
        ydk::YLeaf locifresets; //type: int32
        ydk::YLeaf locifrestarts; //type: int32
        ydk::YLeaf locifkeep; //type: int32
        ydk::YLeaf locifreason; //type: binary
        ydk::YLeaf locifcartrans; //type: int32
        ydk::YLeaf locifreliab; //type: int32
        ydk::YLeaf locifdelay; //type: int32
        ydk::YLeaf locifload; //type: int32
        ydk::YLeaf locifcollisions; //type: int32
        ydk::YLeaf locifinputqueuedrops; //type: int32
        ydk::YLeaf locifoutputqueuedrops; //type: int32
        ydk::YLeaf locifdescr; //type: binary
        ydk::YLeaf locifslowinpkts; //type: uint32
        ydk::YLeaf locifslowoutpkts; //type: uint32
        ydk::YLeaf locifslowinoctets; //type: uint32
        ydk::YLeaf locifslowoutoctets; //type: uint32
        ydk::YLeaf lociffastinpkts; //type: uint32
        ydk::YLeaf lociffastoutpkts; //type: uint32
        ydk::YLeaf lociffastinoctets; //type: uint32
        ydk::YLeaf lociffastoutoctets; //type: uint32
        ydk::YLeaf locifotherinpkts; //type: uint32
        ydk::YLeaf locifotheroutpkts; //type: uint32
        ydk::YLeaf locifotherinoctets; //type: uint32
        ydk::YLeaf locifotheroutoctets; //type: uint32
        ydk::YLeaf locifipinpkts; //type: uint32
        ydk::YLeaf locifipoutpkts; //type: uint32
        ydk::YLeaf locifipinoctets; //type: uint32
        ydk::YLeaf locifipoutoctets; //type: uint32
        ydk::YLeaf locifdecnetinpkts; //type: uint32
        ydk::YLeaf locifdecnetoutpkts; //type: uint32
        ydk::YLeaf locifdecnetinoctets; //type: uint32
        ydk::YLeaf locifdecnetoutoctets; //type: uint32
        ydk::YLeaf locifxnsinpkts; //type: uint32
        ydk::YLeaf locifxnsoutpkts; //type: uint32
        ydk::YLeaf locifxnsinoctets; //type: uint32
        ydk::YLeaf locifxnsoutoctets; //type: uint32
        ydk::YLeaf locifclnsinpkts; //type: uint32
        ydk::YLeaf locifclnsoutpkts; //type: uint32
        ydk::YLeaf locifclnsinoctets; //type: uint32
        ydk::YLeaf locifclnsoutoctets; //type: uint32
        ydk::YLeaf locifappletalkinpkts; //type: uint32
        ydk::YLeaf locifappletalkoutpkts; //type: uint32
        ydk::YLeaf locifappletalkinoctets; //type: uint32
        ydk::YLeaf locifappletalkoutoctets; //type: uint32
        ydk::YLeaf locifnovellinpkts; //type: uint32
        ydk::YLeaf locifnovelloutpkts; //type: uint32
        ydk::YLeaf locifnovellinoctets; //type: uint32
        ydk::YLeaf locifnovelloutoctets; //type: uint32
        ydk::YLeaf locifapolloinpkts; //type: uint32
        ydk::YLeaf locifapollooutpkts; //type: uint32
        ydk::YLeaf locifapolloinoctets; //type: uint32
        ydk::YLeaf locifapollooutoctets; //type: uint32
        ydk::YLeaf locifvinesinpkts; //type: uint32
        ydk::YLeaf locifvinesoutpkts; //type: uint32
        ydk::YLeaf locifvinesinoctets; //type: uint32
        ydk::YLeaf locifvinesoutoctets; //type: uint32
        ydk::YLeaf locifbridgedinpkts; //type: uint32
        ydk::YLeaf locifbridgedoutpkts; //type: uint32
        ydk::YLeaf locifbridgedinoctets; //type: uint32
        ydk::YLeaf locifbridgedoutoctets; //type: uint32
        ydk::YLeaf locifsrbinpkts; //type: uint32
        ydk::YLeaf locifsrboutpkts; //type: uint32
        ydk::YLeaf locifsrbinoctets; //type: uint32
        ydk::YLeaf locifsrboutoctets; //type: uint32
        ydk::YLeaf locifchaosinpkts; //type: uint32
        ydk::YLeaf locifchaosoutpkts; //type: uint32
        ydk::YLeaf locifchaosinoctets; //type: uint32
        ydk::YLeaf locifchaosoutoctets; //type: uint32
        ydk::YLeaf locifpupinpkts; //type: uint32
        ydk::YLeaf locifpupoutpkts; //type: uint32
        ydk::YLeaf locifpupinoctets; //type: uint32
        ydk::YLeaf locifpupoutoctets; //type: uint32
        ydk::YLeaf locifmopinpkts; //type: uint32
        ydk::YLeaf locifmopoutpkts; //type: uint32
        ydk::YLeaf locifmopinoctets; //type: uint32
        ydk::YLeaf locifmopoutoctets; //type: uint32
        ydk::YLeaf lociflanmaninpkts; //type: uint32
        ydk::YLeaf lociflanmanoutpkts; //type: uint32
        ydk::YLeaf lociflanmaninoctets; //type: uint32
        ydk::YLeaf lociflanmanoutoctets; //type: uint32
        ydk::YLeaf locifstuninpkts; //type: uint32
        ydk::YLeaf locifstunoutpkts; //type: uint32
        ydk::YLeaf locifstuninoctets; //type: uint32
        ydk::YLeaf locifstunoutoctets; //type: uint32
        ydk::YLeaf locifspaninpkts; //type: uint32
        ydk::YLeaf locifspanoutpkts; //type: uint32
        ydk::YLeaf locifspaninoctets; //type: uint32
        ydk::YLeaf locifspanoutoctets; //type: uint32
        ydk::YLeaf locifarpinpkts; //type: uint32
        ydk::YLeaf locifarpoutpkts; //type: uint32
        ydk::YLeaf locifarpinoctets; //type: uint32
        ydk::YLeaf locifarpoutoctets; //type: uint32
        ydk::YLeaf locifprobeinpkts; //type: uint32
        ydk::YLeaf locifprobeoutpkts; //type: uint32
        ydk::YLeaf locifprobeinoctets; //type: uint32
        ydk::YLeaf locifprobeoutoctets; //type: uint32
        ydk::YLeaf locifdribbleinputs; //type: uint32

}; // OLDCISCOINTERFACESMIB::LifTable::LifEntry


class OLDCISCOINTERFACESMIB::LFSIPTable : public ydk::Entity
{
    public:
        LFSIPTable();
        ~LFSIPTable();

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

        class LFSIPEntry; //type: OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry

        ydk::YList lfsipentry;
        
}; // OLDCISCOINTERFACESMIB::LFSIPTable


class OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry : public ydk::Entity
{
    public:
        LFSIPEntry();
        ~LFSIPEntry();

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

        ydk::YLeaf lociffsipindex; //type: int32
        ydk::YLeaf lociffsiptype; //type: LocIfFSIPtype
        ydk::YLeaf lociffsiprts; //type: LocIfFSIPrts
        ydk::YLeaf lociffsipcts; //type: LocIfFSIPcts
        ydk::YLeaf lociffsipdtr; //type: LocIfFSIPdtr
        ydk::YLeaf lociffsipdcd; //type: LocIfFSIPdcd
        ydk::YLeaf lociffsipdsr; //type: LocIfFSIPdsr
        ydk::YLeaf lociffsiprxclockrate; //type: int32
        ydk::YLeaf lociffsiprxclockratehi; //type: int32
        ydk::YLeaf lociffsipporttype; //type: LocIfFSIPportType
        class LocIfFSIPtype;
        class LocIfFSIPrts;
        class LocIfFSIPcts;
        class LocIfFSIPdtr;
        class LocIfFSIPdcd;
        class LocIfFSIPdsr;
        class LocIfFSIPportType;

}; // OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry

class OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notAvailable;
        static const ydk::Enum::YLeaf dte;
        static const ydk::Enum::YLeaf dce;

        static int get_enum_value(const std::string & name) {
            if (name == "notAvailable") return 1;
            if (name == "dte") return 2;
            if (name == "dce") return 3;
            return -1;
        }
};

class OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPrts : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notAvailable;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "notAvailable") return 1;
            if (name == "up") return 2;
            if (name == "down") return 3;
            return -1;
        }
};

class OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPcts : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notAvailable;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "notAvailable") return 1;
            if (name == "up") return 2;
            if (name == "down") return 3;
            return -1;
        }
};

class OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPdtr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notAvailable;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "notAvailable") return 1;
            if (name == "up") return 2;
            if (name == "down") return 3;
            return -1;
        }
};

class OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPdcd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notAvailable;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "notAvailable") return 1;
            if (name == "up") return 2;
            if (name == "down") return 3;
            return -1;
        }
};

class OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPdsr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notAvailable;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "notAvailable") return 1;
            if (name == "up") return 2;
            if (name == "down") return 3;
            return -1;
        }
};

class OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPportType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noCable;
        static const ydk::Enum::YLeaf rs232;
        static const ydk::Enum::YLeaf rs422;
        static const ydk::Enum::YLeaf rs423;
        static const ydk::Enum::YLeaf v35;
        static const ydk::Enum::YLeaf x21;
        static const ydk::Enum::YLeaf rs449;
        static const ydk::Enum::YLeaf rs530;
        static const ydk::Enum::YLeaf hssi;
        static const ydk::Enum::YLeaf g703unbal;
        static const ydk::Enum::YLeaf g703bal;
        static const ydk::Enum::YLeaf jt2unbal;

        static int get_enum_value(const std::string & name) {
            if (name == "noCable") return 1;
            if (name == "rs232") return 2;
            if (name == "rs422") return 3;
            if (name == "rs423") return 4;
            if (name == "v35") return 5;
            if (name == "x21") return 6;
            if (name == "rs449") return 7;
            if (name == "rs530") return 8;
            if (name == "hssi") return 9;
            if (name == "g703unbal") return 10;
            if (name == "g703bal") return 11;
            if (name == "jt2unbal") return 12;
            return -1;
        }
};


}
}

#endif /* _OLD_CISCO_INTERFACES_MIB_ */

