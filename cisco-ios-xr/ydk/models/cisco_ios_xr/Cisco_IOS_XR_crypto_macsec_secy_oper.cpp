
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_crypto_macsec_secy_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_crypto_macsec_secy_oper {

Macsec::Macsec()
    :
    secy(std::make_shared<Macsec::Secy>())
{
    secy->parent = this;

    yang_name = "macsec"; yang_parent_name = "Cisco-IOS-XR-crypto-macsec-secy-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Macsec::~Macsec()
{
}

bool Macsec::has_data() const
{
    if (is_presence_container) return true;
    return (secy !=  nullptr && secy->has_data());
}

bool Macsec::has_operation() const
{
    return is_set(yfilter)
	|| (secy !=  nullptr && secy->has_operation());
}

std::string Macsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-macsec-secy-oper:macsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secy")
    {
        if(secy == nullptr)
        {
            secy = std::make_shared<Macsec::Secy>();
        }
        return secy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(secy != nullptr)
    {
        _children["secy"] = secy;
    }

    return _children;
}

void Macsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Macsec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Macsec::clone_ptr() const
{
    return std::make_shared<Macsec>();
}

std::string Macsec::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Macsec::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Macsec::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Macsec::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Macsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secy")
        return true;
    return false;
}

Macsec::Secy::Secy()
    :
    interfaces(std::make_shared<Macsec::Secy::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "secy"; yang_parent_name = "macsec"; is_top_level_class = false; has_list_ancestor = false; 
}

Macsec::Secy::~Secy()
{
}

bool Macsec::Secy::has_data() const
{
    if (is_presence_container) return true;
    return (interfaces !=  nullptr && interfaces->has_data());
}

bool Macsec::Secy::has_operation() const
{
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Macsec::Secy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-macsec-secy-oper:macsec/" << get_segment_path();
    return path_buffer.str();
}

std::string Macsec::Secy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::Secy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::Secy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Macsec::Secy::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::Secy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void Macsec::Secy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Macsec::Secy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Macsec::Secy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces")
        return true;
    return false;
}

Macsec::Secy::Interfaces::Interfaces()
    :
    interface(this, {"name"})
{

    yang_name = "interfaces"; yang_parent_name = "secy"; is_top_level_class = false; has_list_ancestor = false; 
}

Macsec::Secy::Interfaces::~Interfaces()
{
}

bool Macsec::Secy::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Macsec::Secy::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Macsec::Secy::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-macsec-secy-oper:macsec/secy/" << get_segment_path();
    return path_buffer.str();
}

std::string Macsec::Secy::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::Secy::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::Secy::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Macsec::Secy::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::Secy::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Macsec::Secy::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Macsec::Secy::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Macsec::Secy::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Macsec::Secy::Interfaces::Interface::Interface()
    :
    name{YType::str, "name"}
        ,
    stats(std::make_shared<Macsec::Secy::Interfaces::Interface::Stats>())
{
    stats->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Macsec::Secy::Interfaces::Interface::~Interface()
{
}

bool Macsec::Secy::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (stats !=  nullptr && stats->has_data());
}

bool Macsec::Secy::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string Macsec::Secy::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-macsec-secy-oper:macsec/secy/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Macsec::Secy::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::Secy::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::Secy::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<Macsec::Secy::Interfaces::Interface::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::Secy::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(stats != nullptr)
    {
        _children["stats"] = stats;
    }

    return _children;
}

void Macsec::Secy::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Macsec::Secy::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Macsec::Secy::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats" || name == "name")
        return true;
    return false;
}

Macsec::Secy::Interfaces::Interface::Stats::Stats()
    :
    intf_stats(std::make_shared<Macsec::Secy::Interfaces::Interface::Stats::IntfStats>())
    , tx_sc_stats(std::make_shared<Macsec::Secy::Interfaces::Interface::Stats::TxScStats>())
    , rx_sc_stats(this, {})
{
    intf_stats->parent = this;
    tx_sc_stats->parent = this;

    yang_name = "stats"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Macsec::Secy::Interfaces::Interface::Stats::~Stats()
{
}

bool Macsec::Secy::Interfaces::Interface::Stats::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rx_sc_stats.len(); index++)
    {
        if(rx_sc_stats[index]->has_data())
            return true;
    }
    return (intf_stats !=  nullptr && intf_stats->has_data())
	|| (tx_sc_stats !=  nullptr && tx_sc_stats->has_data());
}

bool Macsec::Secy::Interfaces::Interface::Stats::has_operation() const
{
    for (std::size_t index=0; index<rx_sc_stats.len(); index++)
    {
        if(rx_sc_stats[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (intf_stats !=  nullptr && intf_stats->has_operation())
	|| (tx_sc_stats !=  nullptr && tx_sc_stats->has_operation());
}

std::string Macsec::Secy::Interfaces::Interface::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::Secy::Interfaces::Interface::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::Secy::Interfaces::Interface::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-stats")
    {
        if(intf_stats == nullptr)
        {
            intf_stats = std::make_shared<Macsec::Secy::Interfaces::Interface::Stats::IntfStats>();
        }
        return intf_stats;
    }

    if(child_yang_name == "tx-sc-stats")
    {
        if(tx_sc_stats == nullptr)
        {
            tx_sc_stats = std::make_shared<Macsec::Secy::Interfaces::Interface::Stats::TxScStats>();
        }
        return tx_sc_stats;
    }

    if(child_yang_name == "rx-sc-stats")
    {
        auto ent_ = std::make_shared<Macsec::Secy::Interfaces::Interface::Stats::RxScStats>();
        ent_->parent = this;
        rx_sc_stats.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::Secy::Interfaces::Interface::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(intf_stats != nullptr)
    {
        _children["intf-stats"] = intf_stats;
    }

    if(tx_sc_stats != nullptr)
    {
        _children["tx-sc-stats"] = tx_sc_stats;
    }

    count_ = 0;
    for (auto ent_ : rx_sc_stats.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Macsec::Secy::Interfaces::Interface::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Macsec::Secy::Interfaces::Interface::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Macsec::Secy::Interfaces::Interface::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-stats" || name == "tx-sc-stats" || name == "rx-sc-stats")
        return true;
    return false;
}

Macsec::Secy::Interfaces::Interface::Stats::IntfStats::IntfStats()
    :
    in_pkts_untagged{YType::uint64, "in-pkts-untagged"},
    in_pkts_no_tag{YType::uint64, "in-pkts-no-tag"},
    in_pkts_bad_tag{YType::uint64, "in-pkts-bad-tag"},
    in_pkts_unknown_sci{YType::uint64, "in-pkts-unknown-sci"},
    in_pkts_no_sci{YType::uint64, "in-pkts-no-sci"},
    in_pkts_overrun{YType::uint64, "in-pkts-overrun"},
    in_octets_validated{YType::uint64, "in-octets-validated"},
    in_octets_decrypted{YType::uint64, "in-octets-decrypted"},
    out_pkts_untagged{YType::uint64, "out-pkts-untagged"},
    out_pkts_too_long{YType::uint64, "out-pkts-too-long"},
    out_octets_protected{YType::uint64, "out-octets-protected"},
    out_octets_encrypted{YType::uint64, "out-octets-encrypted"}
{

    yang_name = "intf-stats"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Macsec::Secy::Interfaces::Interface::Stats::IntfStats::~IntfStats()
{
}

bool Macsec::Secy::Interfaces::Interface::Stats::IntfStats::has_data() const
{
    if (is_presence_container) return true;
    return in_pkts_untagged.is_set
	|| in_pkts_no_tag.is_set
	|| in_pkts_bad_tag.is_set
	|| in_pkts_unknown_sci.is_set
	|| in_pkts_no_sci.is_set
	|| in_pkts_overrun.is_set
	|| in_octets_validated.is_set
	|| in_octets_decrypted.is_set
	|| out_pkts_untagged.is_set
	|| out_pkts_too_long.is_set
	|| out_octets_protected.is_set
	|| out_octets_encrypted.is_set;
}

bool Macsec::Secy::Interfaces::Interface::Stats::IntfStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_pkts_untagged.yfilter)
	|| ydk::is_set(in_pkts_no_tag.yfilter)
	|| ydk::is_set(in_pkts_bad_tag.yfilter)
	|| ydk::is_set(in_pkts_unknown_sci.yfilter)
	|| ydk::is_set(in_pkts_no_sci.yfilter)
	|| ydk::is_set(in_pkts_overrun.yfilter)
	|| ydk::is_set(in_octets_validated.yfilter)
	|| ydk::is_set(in_octets_decrypted.yfilter)
	|| ydk::is_set(out_pkts_untagged.yfilter)
	|| ydk::is_set(out_pkts_too_long.yfilter)
	|| ydk::is_set(out_octets_protected.yfilter)
	|| ydk::is_set(out_octets_encrypted.yfilter);
}

std::string Macsec::Secy::Interfaces::Interface::Stats::IntfStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::Secy::Interfaces::Interface::Stats::IntfStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_pkts_untagged.is_set || is_set(in_pkts_untagged.yfilter)) leaf_name_data.push_back(in_pkts_untagged.get_name_leafdata());
    if (in_pkts_no_tag.is_set || is_set(in_pkts_no_tag.yfilter)) leaf_name_data.push_back(in_pkts_no_tag.get_name_leafdata());
    if (in_pkts_bad_tag.is_set || is_set(in_pkts_bad_tag.yfilter)) leaf_name_data.push_back(in_pkts_bad_tag.get_name_leafdata());
    if (in_pkts_unknown_sci.is_set || is_set(in_pkts_unknown_sci.yfilter)) leaf_name_data.push_back(in_pkts_unknown_sci.get_name_leafdata());
    if (in_pkts_no_sci.is_set || is_set(in_pkts_no_sci.yfilter)) leaf_name_data.push_back(in_pkts_no_sci.get_name_leafdata());
    if (in_pkts_overrun.is_set || is_set(in_pkts_overrun.yfilter)) leaf_name_data.push_back(in_pkts_overrun.get_name_leafdata());
    if (in_octets_validated.is_set || is_set(in_octets_validated.yfilter)) leaf_name_data.push_back(in_octets_validated.get_name_leafdata());
    if (in_octets_decrypted.is_set || is_set(in_octets_decrypted.yfilter)) leaf_name_data.push_back(in_octets_decrypted.get_name_leafdata());
    if (out_pkts_untagged.is_set || is_set(out_pkts_untagged.yfilter)) leaf_name_data.push_back(out_pkts_untagged.get_name_leafdata());
    if (out_pkts_too_long.is_set || is_set(out_pkts_too_long.yfilter)) leaf_name_data.push_back(out_pkts_too_long.get_name_leafdata());
    if (out_octets_protected.is_set || is_set(out_octets_protected.yfilter)) leaf_name_data.push_back(out_octets_protected.get_name_leafdata());
    if (out_octets_encrypted.is_set || is_set(out_octets_encrypted.yfilter)) leaf_name_data.push_back(out_octets_encrypted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::Secy::Interfaces::Interface::Stats::IntfStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::Secy::Interfaces::Interface::Stats::IntfStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Macsec::Secy::Interfaces::Interface::Stats::IntfStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-pkts-untagged")
    {
        in_pkts_untagged = value;
        in_pkts_untagged.value_namespace = name_space;
        in_pkts_untagged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-no-tag")
    {
        in_pkts_no_tag = value;
        in_pkts_no_tag.value_namespace = name_space;
        in_pkts_no_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-bad-tag")
    {
        in_pkts_bad_tag = value;
        in_pkts_bad_tag.value_namespace = name_space;
        in_pkts_bad_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-unknown-sci")
    {
        in_pkts_unknown_sci = value;
        in_pkts_unknown_sci.value_namespace = name_space;
        in_pkts_unknown_sci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-no-sci")
    {
        in_pkts_no_sci = value;
        in_pkts_no_sci.value_namespace = name_space;
        in_pkts_no_sci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-overrun")
    {
        in_pkts_overrun = value;
        in_pkts_overrun.value_namespace = name_space;
        in_pkts_overrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets-validated")
    {
        in_octets_validated = value;
        in_octets_validated.value_namespace = name_space;
        in_octets_validated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets-decrypted")
    {
        in_octets_decrypted = value;
        in_octets_decrypted.value_namespace = name_space;
        in_octets_decrypted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkts-untagged")
    {
        out_pkts_untagged = value;
        out_pkts_untagged.value_namespace = name_space;
        out_pkts_untagged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkts-too-long")
    {
        out_pkts_too_long = value;
        out_pkts_too_long.value_namespace = name_space;
        out_pkts_too_long.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets-protected")
    {
        out_octets_protected = value;
        out_octets_protected.value_namespace = name_space;
        out_octets_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets-encrypted")
    {
        out_octets_encrypted = value;
        out_octets_encrypted.value_namespace = name_space;
        out_octets_encrypted.value_namespace_prefix = name_space_prefix;
    }
}

void Macsec::Secy::Interfaces::Interface::Stats::IntfStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-pkts-untagged")
    {
        in_pkts_untagged.yfilter = yfilter;
    }
    if(value_path == "in-pkts-no-tag")
    {
        in_pkts_no_tag.yfilter = yfilter;
    }
    if(value_path == "in-pkts-bad-tag")
    {
        in_pkts_bad_tag.yfilter = yfilter;
    }
    if(value_path == "in-pkts-unknown-sci")
    {
        in_pkts_unknown_sci.yfilter = yfilter;
    }
    if(value_path == "in-pkts-no-sci")
    {
        in_pkts_no_sci.yfilter = yfilter;
    }
    if(value_path == "in-pkts-overrun")
    {
        in_pkts_overrun.yfilter = yfilter;
    }
    if(value_path == "in-octets-validated")
    {
        in_octets_validated.yfilter = yfilter;
    }
    if(value_path == "in-octets-decrypted")
    {
        in_octets_decrypted.yfilter = yfilter;
    }
    if(value_path == "out-pkts-untagged")
    {
        out_pkts_untagged.yfilter = yfilter;
    }
    if(value_path == "out-pkts-too-long")
    {
        out_pkts_too_long.yfilter = yfilter;
    }
    if(value_path == "out-octets-protected")
    {
        out_octets_protected.yfilter = yfilter;
    }
    if(value_path == "out-octets-encrypted")
    {
        out_octets_encrypted.yfilter = yfilter;
    }
}

bool Macsec::Secy::Interfaces::Interface::Stats::IntfStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-pkts-untagged" || name == "in-pkts-no-tag" || name == "in-pkts-bad-tag" || name == "in-pkts-unknown-sci" || name == "in-pkts-no-sci" || name == "in-pkts-overrun" || name == "in-octets-validated" || name == "in-octets-decrypted" || name == "out-pkts-untagged" || name == "out-pkts-too-long" || name == "out-octets-protected" || name == "out-octets-encrypted")
        return true;
    return false;
}

Macsec::Secy::Interfaces::Interface::Stats::TxScStats::TxScStats()
    :
    tx_sci{YType::uint64, "tx-sci"},
    out_pkts_protected{YType::uint64, "out-pkts-protected"},
    out_pkts_encrypted{YType::uint64, "out-pkts-encrypted"},
    out_octets_protected{YType::uint64, "out-octets-protected"},
    out_octets_encrypted{YType::uint64, "out-octets-encrypted"},
    out_pkts_too_long{YType::uint64, "out-pkts-too-long"}
        ,
    txsa_stat(this, {})
{

    yang_name = "tx-sc-stats"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Macsec::Secy::Interfaces::Interface::Stats::TxScStats::~TxScStats()
{
}

bool Macsec::Secy::Interfaces::Interface::Stats::TxScStats::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<txsa_stat.len(); index++)
    {
        if(txsa_stat[index]->has_data())
            return true;
    }
    return tx_sci.is_set
	|| out_pkts_protected.is_set
	|| out_pkts_encrypted.is_set
	|| out_octets_protected.is_set
	|| out_octets_encrypted.is_set
	|| out_pkts_too_long.is_set;
}

bool Macsec::Secy::Interfaces::Interface::Stats::TxScStats::has_operation() const
{
    for (std::size_t index=0; index<txsa_stat.len(); index++)
    {
        if(txsa_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tx_sci.yfilter)
	|| ydk::is_set(out_pkts_protected.yfilter)
	|| ydk::is_set(out_pkts_encrypted.yfilter)
	|| ydk::is_set(out_octets_protected.yfilter)
	|| ydk::is_set(out_octets_encrypted.yfilter)
	|| ydk::is_set(out_pkts_too_long.yfilter);
}

std::string Macsec::Secy::Interfaces::Interface::Stats::TxScStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-sc-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::Secy::Interfaces::Interface::Stats::TxScStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_sci.is_set || is_set(tx_sci.yfilter)) leaf_name_data.push_back(tx_sci.get_name_leafdata());
    if (out_pkts_protected.is_set || is_set(out_pkts_protected.yfilter)) leaf_name_data.push_back(out_pkts_protected.get_name_leafdata());
    if (out_pkts_encrypted.is_set || is_set(out_pkts_encrypted.yfilter)) leaf_name_data.push_back(out_pkts_encrypted.get_name_leafdata());
    if (out_octets_protected.is_set || is_set(out_octets_protected.yfilter)) leaf_name_data.push_back(out_octets_protected.get_name_leafdata());
    if (out_octets_encrypted.is_set || is_set(out_octets_encrypted.yfilter)) leaf_name_data.push_back(out_octets_encrypted.get_name_leafdata());
    if (out_pkts_too_long.is_set || is_set(out_pkts_too_long.yfilter)) leaf_name_data.push_back(out_pkts_too_long.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::Secy::Interfaces::Interface::Stats::TxScStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "txsa-stat")
    {
        auto ent_ = std::make_shared<Macsec::Secy::Interfaces::Interface::Stats::TxScStats::TxsaStat>();
        ent_->parent = this;
        txsa_stat.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::Secy::Interfaces::Interface::Stats::TxScStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : txsa_stat.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Macsec::Secy::Interfaces::Interface::Stats::TxScStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-sci")
    {
        tx_sci = value;
        tx_sci.value_namespace = name_space;
        tx_sci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkts-protected")
    {
        out_pkts_protected = value;
        out_pkts_protected.value_namespace = name_space;
        out_pkts_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkts-encrypted")
    {
        out_pkts_encrypted = value;
        out_pkts_encrypted.value_namespace = name_space;
        out_pkts_encrypted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets-protected")
    {
        out_octets_protected = value;
        out_octets_protected.value_namespace = name_space;
        out_octets_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets-encrypted")
    {
        out_octets_encrypted = value;
        out_octets_encrypted.value_namespace = name_space;
        out_octets_encrypted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkts-too-long")
    {
        out_pkts_too_long = value;
        out_pkts_too_long.value_namespace = name_space;
        out_pkts_too_long.value_namespace_prefix = name_space_prefix;
    }
}

void Macsec::Secy::Interfaces::Interface::Stats::TxScStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-sci")
    {
        tx_sci.yfilter = yfilter;
    }
    if(value_path == "out-pkts-protected")
    {
        out_pkts_protected.yfilter = yfilter;
    }
    if(value_path == "out-pkts-encrypted")
    {
        out_pkts_encrypted.yfilter = yfilter;
    }
    if(value_path == "out-octets-protected")
    {
        out_octets_protected.yfilter = yfilter;
    }
    if(value_path == "out-octets-encrypted")
    {
        out_octets_encrypted.yfilter = yfilter;
    }
    if(value_path == "out-pkts-too-long")
    {
        out_pkts_too_long.yfilter = yfilter;
    }
}

bool Macsec::Secy::Interfaces::Interface::Stats::TxScStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "txsa-stat" || name == "tx-sci" || name == "out-pkts-protected" || name == "out-pkts-encrypted" || name == "out-octets-protected" || name == "out-octets-encrypted" || name == "out-pkts-too-long")
        return true;
    return false;
}

Macsec::Secy::Interfaces::Interface::Stats::TxScStats::TxsaStat::TxsaStat()
    :
    out_pkts_protected{YType::uint64, "out-pkts-protected"},
    out_pkts_encrypted{YType::uint64, "out-pkts-encrypted"},
    next_pn{YType::uint64, "next-pn"}
{

    yang_name = "txsa-stat"; yang_parent_name = "tx-sc-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Macsec::Secy::Interfaces::Interface::Stats::TxScStats::TxsaStat::~TxsaStat()
{
}

bool Macsec::Secy::Interfaces::Interface::Stats::TxScStats::TxsaStat::has_data() const
{
    if (is_presence_container) return true;
    return out_pkts_protected.is_set
	|| out_pkts_encrypted.is_set
	|| next_pn.is_set;
}

bool Macsec::Secy::Interfaces::Interface::Stats::TxScStats::TxsaStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out_pkts_protected.yfilter)
	|| ydk::is_set(out_pkts_encrypted.yfilter)
	|| ydk::is_set(next_pn.yfilter);
}

std::string Macsec::Secy::Interfaces::Interface::Stats::TxScStats::TxsaStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "txsa-stat";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::Secy::Interfaces::Interface::Stats::TxScStats::TxsaStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_pkts_protected.is_set || is_set(out_pkts_protected.yfilter)) leaf_name_data.push_back(out_pkts_protected.get_name_leafdata());
    if (out_pkts_encrypted.is_set || is_set(out_pkts_encrypted.yfilter)) leaf_name_data.push_back(out_pkts_encrypted.get_name_leafdata());
    if (next_pn.is_set || is_set(next_pn.yfilter)) leaf_name_data.push_back(next_pn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::Secy::Interfaces::Interface::Stats::TxScStats::TxsaStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::Secy::Interfaces::Interface::Stats::TxScStats::TxsaStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Macsec::Secy::Interfaces::Interface::Stats::TxScStats::TxsaStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out-pkts-protected")
    {
        out_pkts_protected = value;
        out_pkts_protected.value_namespace = name_space;
        out_pkts_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkts-encrypted")
    {
        out_pkts_encrypted = value;
        out_pkts_encrypted.value_namespace = name_space;
        out_pkts_encrypted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-pn")
    {
        next_pn = value;
        next_pn.value_namespace = name_space;
        next_pn.value_namespace_prefix = name_space_prefix;
    }
}

void Macsec::Secy::Interfaces::Interface::Stats::TxScStats::TxsaStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out-pkts-protected")
    {
        out_pkts_protected.yfilter = yfilter;
    }
    if(value_path == "out-pkts-encrypted")
    {
        out_pkts_encrypted.yfilter = yfilter;
    }
    if(value_path == "next-pn")
    {
        next_pn.yfilter = yfilter;
    }
}

bool Macsec::Secy::Interfaces::Interface::Stats::TxScStats::TxsaStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-pkts-protected" || name == "out-pkts-encrypted" || name == "next-pn")
        return true;
    return false;
}

Macsec::Secy::Interfaces::Interface::Stats::RxScStats::RxScStats()
    :
    rx_sci{YType::uint64, "rx-sci"},
    in_pkts_unchecked{YType::uint64, "in-pkts-unchecked"},
    in_pkts_delayed{YType::uint64, "in-pkts-delayed"},
    in_pkts_late{YType::uint64, "in-pkts-late"},
    in_pkts_ok{YType::uint64, "in-pkts-ok"},
    in_pkts_invalid{YType::uint64, "in-pkts-invalid"},
    in_pkts_not_valid{YType::uint64, "in-pkts-not-valid"},
    in_pkts_not_using_sa{YType::uint64, "in-pkts-not-using-sa"},
    in_pkts_unused_sa{YType::uint64, "in-pkts-unused-sa"},
    in_pkts_untagged_hit{YType::uint64, "in-pkts-untagged-hit"},
    in_octets_validated{YType::uint64, "in-octets-validated"},
    in_octets_decrypted{YType::uint64, "in-octets-decrypted"}
        ,
    rxsa_stat(this, {})
{

    yang_name = "rx-sc-stats"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Macsec::Secy::Interfaces::Interface::Stats::RxScStats::~RxScStats()
{
}

bool Macsec::Secy::Interfaces::Interface::Stats::RxScStats::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rxsa_stat.len(); index++)
    {
        if(rxsa_stat[index]->has_data())
            return true;
    }
    return rx_sci.is_set
	|| in_pkts_unchecked.is_set
	|| in_pkts_delayed.is_set
	|| in_pkts_late.is_set
	|| in_pkts_ok.is_set
	|| in_pkts_invalid.is_set
	|| in_pkts_not_valid.is_set
	|| in_pkts_not_using_sa.is_set
	|| in_pkts_unused_sa.is_set
	|| in_pkts_untagged_hit.is_set
	|| in_octets_validated.is_set
	|| in_octets_decrypted.is_set;
}

bool Macsec::Secy::Interfaces::Interface::Stats::RxScStats::has_operation() const
{
    for (std::size_t index=0; index<rxsa_stat.len(); index++)
    {
        if(rxsa_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rx_sci.yfilter)
	|| ydk::is_set(in_pkts_unchecked.yfilter)
	|| ydk::is_set(in_pkts_delayed.yfilter)
	|| ydk::is_set(in_pkts_late.yfilter)
	|| ydk::is_set(in_pkts_ok.yfilter)
	|| ydk::is_set(in_pkts_invalid.yfilter)
	|| ydk::is_set(in_pkts_not_valid.yfilter)
	|| ydk::is_set(in_pkts_not_using_sa.yfilter)
	|| ydk::is_set(in_pkts_unused_sa.yfilter)
	|| ydk::is_set(in_pkts_untagged_hit.yfilter)
	|| ydk::is_set(in_octets_validated.yfilter)
	|| ydk::is_set(in_octets_decrypted.yfilter);
}

std::string Macsec::Secy::Interfaces::Interface::Stats::RxScStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sc-stats";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::Secy::Interfaces::Interface::Stats::RxScStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rx_sci.is_set || is_set(rx_sci.yfilter)) leaf_name_data.push_back(rx_sci.get_name_leafdata());
    if (in_pkts_unchecked.is_set || is_set(in_pkts_unchecked.yfilter)) leaf_name_data.push_back(in_pkts_unchecked.get_name_leafdata());
    if (in_pkts_delayed.is_set || is_set(in_pkts_delayed.yfilter)) leaf_name_data.push_back(in_pkts_delayed.get_name_leafdata());
    if (in_pkts_late.is_set || is_set(in_pkts_late.yfilter)) leaf_name_data.push_back(in_pkts_late.get_name_leafdata());
    if (in_pkts_ok.is_set || is_set(in_pkts_ok.yfilter)) leaf_name_data.push_back(in_pkts_ok.get_name_leafdata());
    if (in_pkts_invalid.is_set || is_set(in_pkts_invalid.yfilter)) leaf_name_data.push_back(in_pkts_invalid.get_name_leafdata());
    if (in_pkts_not_valid.is_set || is_set(in_pkts_not_valid.yfilter)) leaf_name_data.push_back(in_pkts_not_valid.get_name_leafdata());
    if (in_pkts_not_using_sa.is_set || is_set(in_pkts_not_using_sa.yfilter)) leaf_name_data.push_back(in_pkts_not_using_sa.get_name_leafdata());
    if (in_pkts_unused_sa.is_set || is_set(in_pkts_unused_sa.yfilter)) leaf_name_data.push_back(in_pkts_unused_sa.get_name_leafdata());
    if (in_pkts_untagged_hit.is_set || is_set(in_pkts_untagged_hit.yfilter)) leaf_name_data.push_back(in_pkts_untagged_hit.get_name_leafdata());
    if (in_octets_validated.is_set || is_set(in_octets_validated.yfilter)) leaf_name_data.push_back(in_octets_validated.get_name_leafdata());
    if (in_octets_decrypted.is_set || is_set(in_octets_decrypted.yfilter)) leaf_name_data.push_back(in_octets_decrypted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::Secy::Interfaces::Interface::Stats::RxScStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rxsa-stat")
    {
        auto ent_ = std::make_shared<Macsec::Secy::Interfaces::Interface::Stats::RxScStats::RxsaStat>();
        ent_->parent = this;
        rxsa_stat.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::Secy::Interfaces::Interface::Stats::RxScStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rxsa_stat.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Macsec::Secy::Interfaces::Interface::Stats::RxScStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rx-sci")
    {
        rx_sci = value;
        rx_sci.value_namespace = name_space;
        rx_sci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-unchecked")
    {
        in_pkts_unchecked = value;
        in_pkts_unchecked.value_namespace = name_space;
        in_pkts_unchecked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-delayed")
    {
        in_pkts_delayed = value;
        in_pkts_delayed.value_namespace = name_space;
        in_pkts_delayed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-late")
    {
        in_pkts_late = value;
        in_pkts_late.value_namespace = name_space;
        in_pkts_late.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-ok")
    {
        in_pkts_ok = value;
        in_pkts_ok.value_namespace = name_space;
        in_pkts_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-invalid")
    {
        in_pkts_invalid = value;
        in_pkts_invalid.value_namespace = name_space;
        in_pkts_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-not-valid")
    {
        in_pkts_not_valid = value;
        in_pkts_not_valid.value_namespace = name_space;
        in_pkts_not_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-not-using-sa")
    {
        in_pkts_not_using_sa = value;
        in_pkts_not_using_sa.value_namespace = name_space;
        in_pkts_not_using_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-unused-sa")
    {
        in_pkts_unused_sa = value;
        in_pkts_unused_sa.value_namespace = name_space;
        in_pkts_unused_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-untagged-hit")
    {
        in_pkts_untagged_hit = value;
        in_pkts_untagged_hit.value_namespace = name_space;
        in_pkts_untagged_hit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets-validated")
    {
        in_octets_validated = value;
        in_octets_validated.value_namespace = name_space;
        in_octets_validated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets-decrypted")
    {
        in_octets_decrypted = value;
        in_octets_decrypted.value_namespace = name_space;
        in_octets_decrypted.value_namespace_prefix = name_space_prefix;
    }
}

void Macsec::Secy::Interfaces::Interface::Stats::RxScStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rx-sci")
    {
        rx_sci.yfilter = yfilter;
    }
    if(value_path == "in-pkts-unchecked")
    {
        in_pkts_unchecked.yfilter = yfilter;
    }
    if(value_path == "in-pkts-delayed")
    {
        in_pkts_delayed.yfilter = yfilter;
    }
    if(value_path == "in-pkts-late")
    {
        in_pkts_late.yfilter = yfilter;
    }
    if(value_path == "in-pkts-ok")
    {
        in_pkts_ok.yfilter = yfilter;
    }
    if(value_path == "in-pkts-invalid")
    {
        in_pkts_invalid.yfilter = yfilter;
    }
    if(value_path == "in-pkts-not-valid")
    {
        in_pkts_not_valid.yfilter = yfilter;
    }
    if(value_path == "in-pkts-not-using-sa")
    {
        in_pkts_not_using_sa.yfilter = yfilter;
    }
    if(value_path == "in-pkts-unused-sa")
    {
        in_pkts_unused_sa.yfilter = yfilter;
    }
    if(value_path == "in-pkts-untagged-hit")
    {
        in_pkts_untagged_hit.yfilter = yfilter;
    }
    if(value_path == "in-octets-validated")
    {
        in_octets_validated.yfilter = yfilter;
    }
    if(value_path == "in-octets-decrypted")
    {
        in_octets_decrypted.yfilter = yfilter;
    }
}

bool Macsec::Secy::Interfaces::Interface::Stats::RxScStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rxsa-stat" || name == "rx-sci" || name == "in-pkts-unchecked" || name == "in-pkts-delayed" || name == "in-pkts-late" || name == "in-pkts-ok" || name == "in-pkts-invalid" || name == "in-pkts-not-valid" || name == "in-pkts-not-using-sa" || name == "in-pkts-unused-sa" || name == "in-pkts-untagged-hit" || name == "in-octets-validated" || name == "in-octets-decrypted")
        return true;
    return false;
}

Macsec::Secy::Interfaces::Interface::Stats::RxScStats::RxsaStat::RxsaStat()
    :
    in_pkts_ok{YType::uint64, "in-pkts-ok"},
    in_pkts_invalid{YType::uint64, "in-pkts-invalid"},
    in_pkts_not_valid{YType::uint64, "in-pkts-not-valid"},
    in_pkts_not_using_sa{YType::uint64, "in-pkts-not-using-sa"},
    in_pkts_unused_sa{YType::uint64, "in-pkts-unused-sa"},
    next_pn{YType::uint64, "next-pn"}
{

    yang_name = "rxsa-stat"; yang_parent_name = "rx-sc-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Macsec::Secy::Interfaces::Interface::Stats::RxScStats::RxsaStat::~RxsaStat()
{
}

bool Macsec::Secy::Interfaces::Interface::Stats::RxScStats::RxsaStat::has_data() const
{
    if (is_presence_container) return true;
    return in_pkts_ok.is_set
	|| in_pkts_invalid.is_set
	|| in_pkts_not_valid.is_set
	|| in_pkts_not_using_sa.is_set
	|| in_pkts_unused_sa.is_set
	|| next_pn.is_set;
}

bool Macsec::Secy::Interfaces::Interface::Stats::RxScStats::RxsaStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_pkts_ok.yfilter)
	|| ydk::is_set(in_pkts_invalid.yfilter)
	|| ydk::is_set(in_pkts_not_valid.yfilter)
	|| ydk::is_set(in_pkts_not_using_sa.yfilter)
	|| ydk::is_set(in_pkts_unused_sa.yfilter)
	|| ydk::is_set(next_pn.yfilter);
}

std::string Macsec::Secy::Interfaces::Interface::Stats::RxScStats::RxsaStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rxsa-stat";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::Secy::Interfaces::Interface::Stats::RxScStats::RxsaStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_pkts_ok.is_set || is_set(in_pkts_ok.yfilter)) leaf_name_data.push_back(in_pkts_ok.get_name_leafdata());
    if (in_pkts_invalid.is_set || is_set(in_pkts_invalid.yfilter)) leaf_name_data.push_back(in_pkts_invalid.get_name_leafdata());
    if (in_pkts_not_valid.is_set || is_set(in_pkts_not_valid.yfilter)) leaf_name_data.push_back(in_pkts_not_valid.get_name_leafdata());
    if (in_pkts_not_using_sa.is_set || is_set(in_pkts_not_using_sa.yfilter)) leaf_name_data.push_back(in_pkts_not_using_sa.get_name_leafdata());
    if (in_pkts_unused_sa.is_set || is_set(in_pkts_unused_sa.yfilter)) leaf_name_data.push_back(in_pkts_unused_sa.get_name_leafdata());
    if (next_pn.is_set || is_set(next_pn.yfilter)) leaf_name_data.push_back(next_pn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::Secy::Interfaces::Interface::Stats::RxScStats::RxsaStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::Secy::Interfaces::Interface::Stats::RxScStats::RxsaStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Macsec::Secy::Interfaces::Interface::Stats::RxScStats::RxsaStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-pkts-ok")
    {
        in_pkts_ok = value;
        in_pkts_ok.value_namespace = name_space;
        in_pkts_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-invalid")
    {
        in_pkts_invalid = value;
        in_pkts_invalid.value_namespace = name_space;
        in_pkts_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-not-valid")
    {
        in_pkts_not_valid = value;
        in_pkts_not_valid.value_namespace = name_space;
        in_pkts_not_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-not-using-sa")
    {
        in_pkts_not_using_sa = value;
        in_pkts_not_using_sa.value_namespace = name_space;
        in_pkts_not_using_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts-unused-sa")
    {
        in_pkts_unused_sa = value;
        in_pkts_unused_sa.value_namespace = name_space;
        in_pkts_unused_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-pn")
    {
        next_pn = value;
        next_pn.value_namespace = name_space;
        next_pn.value_namespace_prefix = name_space_prefix;
    }
}

void Macsec::Secy::Interfaces::Interface::Stats::RxScStats::RxsaStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-pkts-ok")
    {
        in_pkts_ok.yfilter = yfilter;
    }
    if(value_path == "in-pkts-invalid")
    {
        in_pkts_invalid.yfilter = yfilter;
    }
    if(value_path == "in-pkts-not-valid")
    {
        in_pkts_not_valid.yfilter = yfilter;
    }
    if(value_path == "in-pkts-not-using-sa")
    {
        in_pkts_not_using_sa.yfilter = yfilter;
    }
    if(value_path == "in-pkts-unused-sa")
    {
        in_pkts_unused_sa.yfilter = yfilter;
    }
    if(value_path == "next-pn")
    {
        next_pn.yfilter = yfilter;
    }
}

bool Macsec::Secy::Interfaces::Interface::Stats::RxScStats::RxsaStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-pkts-ok" || name == "in-pkts-invalid" || name == "in-pkts-not-valid" || name == "in-pkts-not-using-sa" || name == "in-pkts-unused-sa" || name == "next-pn")
        return true;
    return false;
}


}
}

